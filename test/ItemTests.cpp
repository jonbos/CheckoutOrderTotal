#include <gtest/gtest.h>
#include "../Item.hpp"
TEST(ItemTests, TestShouldCreateItemFromStringAndPrice)
{
    Item *soup = new Item("soup", 1.89);
    ASSERT_EQ(soup->getSku(), "soup");
    ASSERT_DOUBLE_EQ(soup->getPrice(), 1.89);
}