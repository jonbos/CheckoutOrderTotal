#include <gtest/gtest.h>
#include "../BuyXGetZSpecial.hpp"
#include <vector>
#include "../Item.hpp"
TEST(MarkdownTests, CanCreateBuyXGetZSpecial)
{
    BuyXGetZSpecial *bogo = new BuyXGetZSpecial("soup", 1, 1, 1.0);
    ASSERT_EQ(bogo->getTrigger(), 1);
    ASSERT_EQ(bogo->getItemName(), "soup");
    ASSERT_EQ(bogo->getDiscountCount(), 1);
    ASSERT_EQ(bogo->getDiscountPercentage(), 1.0);
}
TEST(MarkdownTests, BuyXGetZBOGOShouldMakeOneItemFree)
{
    BuyXGetZSpecial *bogo = new BuyXGetZSpecial("soup", 1, 1, 1.0);
    Item *soup = new Item("soup", 1.89, 1.0);
    Item *bread = new Item("Bread", 12.00, 1.0);
    std::vector<Item> items;
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*bread);

    double discount = bogo->calculateDiscountAmount(items);

    ASSERT_DOUBLE_EQ(discount, 1.89);
}