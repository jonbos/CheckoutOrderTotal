#include <gtest/gtest.h>
#include "../NForXSpecial.hpp"
#include <vector>
#include "../Item.hpp"
TEST(NForXSpecialTests, CanCreateNForXSpecialWithNameAndDiscountAmount)
{
    NForXSpecial *threeForFive = new NForXSpecial("soup", 3, 5.00);
    ASSERT_DOUBLE_EQ(5.00, threeForFive->getPrice());
}
TEST(MarkdownTests, ShouldCalculatePriceBasedOnNumberOfItems)
{
    std::vector<Item> items;
    Item *soup = new Item("soup", 1.89, 1.0);
    Item *bread = new Item("Bread", 1.89, 1.0);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*bread);
    NForXSpecial *threeForFive = new NForXSpecial("soup", 3, 5.00);

    ASSERT_DOUBLE_EQ(threeForFive->calculateDiscountAmount(items), 0.67);
}
TEST(MarkdownTests, ShouldEnforceLimits)
{
    std::vector<Item> items;
    Item *soup = new Item("soup", 1.89, 1.0);
    Item *bread = new Item("Bread", 1.89, 1.0);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*bread);
    // Only the first 2 soups should ring up at 2 / $ 3
    NForXSpecial *threeForFive = new NForXSpecial("soup", 2, 3.00, 2);

    ASSERT_DOUBLE_EQ(threeForFive->calculateDiscountAmount(items), 0.78);
}
