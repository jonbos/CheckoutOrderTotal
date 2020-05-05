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
