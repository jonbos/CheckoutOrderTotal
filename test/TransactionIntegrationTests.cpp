/**
    CIS161 
    NForXSpecialTests.cpp
    Purpose: Integration test for Transaction class
    @author Jon Bos
*/
#include <gtest/gtest.h>
#include "../Transaction.hpp"
#include "../MarkdownSpecial.hpp"
#include "../Item.hpp"
#include <iostream>

TEST(TransactionTests, TransactionIntegrationTest)
{
    unordered_map<string, double> priceDB{
        {"soup", 1.89}, {"meat", 1.99}, {"bread", 1.30}};

    Transaction *t = new Transaction(&priceDB);
    Special *md = new Markdown("soup", .4, 2);
    t->addSpecial(*md);
    // buying 3 soups. soup has 40 cent markdown, limit 2, so total should be ((1.49*2) + 1.89 + 1.99 + 1.30) = 8.16
    t->scan("soup");
    t->scan("soup");
    t->scan("soup");
    t->scan("meat");
    t->scan("bread");

    ASSERT_DOUBLE_EQ(t->calculateTotal(), 8.16);
}
