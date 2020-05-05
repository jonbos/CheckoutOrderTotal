#include <gtest/gtest.h>
#include "../Markdown.hpp"
#include <vector>
#include "../Item.hpp"
TEST(MarkdownTests, CanCreateMarkdownWithNameAndDiscountAmount)
{
    Markdown *tenCentsOff = new Markdown("soup", .1);
    ASSERT_DOUBLE_EQ(.1, tenCentsOff->getDiscountPerUnit());
}
TEST(MarkdownTests, MarkdownShouldCalculateNumberOfDiscounts)
{
    std::vector<Item> items;
    Item *soup = new Item("soup", 1.89, 1.0);
    Item *bread = new Item("Bread", 1.89, 1.0);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*bread);
    Markdown tenCentsOff("soup", .1);
    ASSERT_EQ(tenCentsOff.calculateNumDiscounts(items), 2);
}

TEST(MarkdownTests, MarkdownShouldCalculateDiscountForSingleItem)
{
    std::vector<Item> items;
    Item *soup = new Item("soup", 1.89, 1.0);
    items.push_back(*soup);
    Markdown *tenCentsOff = new Markdown("soup", .1);
    double disc = tenCentsOff->calculateDiscountAmount(items);
    ASSERT_DOUBLE_EQ(disc, .1);
}
TEST(MarkdownTests, MarkdownShouldCalculateDiscountForMultipleItems)
{
    std::vector<Item> items;
    Item *soup = new Item("soup", 1.89, 1.0);
    items.push_back(*soup);
    items.push_back(*soup);
    Markdown *tenCentsOff = new Markdown("soup", .1);
    double disc = tenCentsOff->calculateDiscountAmount(items);
    ASSERT_DOUBLE_EQ(disc, .2);
}

TEST(MarkdownTests, MarkdownShouldEnforeLimits)
{
    std::vector<Item> items;
    Item *soup = new Item("soup", 1.89, 1.0);
    items.push_back(*soup);
    items.push_back(*soup);
    items.push_back(*soup);

    Markdown *tenCentsOff = new Markdown("soup", .1, 2);

    double disc = tenCentsOff->calculateDiscountAmount(items);

    ASSERT_DOUBLE_EQ(disc, .2);
}
