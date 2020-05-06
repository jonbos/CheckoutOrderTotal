/**
    CIS161 
    TransactionTests.cpp
    Purpose: Unit tests for the Transaction class
    @author Jon Bos
*/
#include <gtest/gtest.h>
#include "../Transaction.hpp"
#include "../MarkdownSpecial.hpp"
#include <unordered_map>
#include <iostream>
TEST(TransactionTests, TransactionShouldInstantiateWithZeroItems)
{
    Transaction *t = new Transaction();
    ASSERT_EQ(t->getItems().size(), 0);
}
TEST(TransactionTests, TransactionShouldInitWithPriceDB)
{
    unordered_map<string, double> priceDB;
    priceDB["soup"] = 1.89;
    Transaction *t = new Transaction(&priceDB);
    ASSERT_EQ(t->getPriceDB()["soup"], priceDB["soup"]);
}
TEST(TransactionTests, TransactionShouldCreateItemWhenItemIsScanned)
{
    unordered_map<string, double> priceDB;
    priceDB["soup"] = 1.89;
    Transaction *t = new Transaction(&priceDB);
    t->scan("soup");
    ASSERT_EQ(t->getItems().size(), 1);
}
TEST(TransactionTests, TransactionShouldCalculateTotalBasedOffItems)
{
    unordered_map<string, double> priceDB;
    priceDB["soup"] = 1.89;
    Transaction *t = new Transaction(&priceDB);
    t->scan("soup");
    ASSERT_DOUBLE_EQ(t->calculateTotal(), priceDB["soup"]);
    t->scan("soup");
    ASSERT_DOUBLE_EQ(t->calculateTotal(), priceDB["soup"] * 2);
}
TEST(TransactionTests, TransactionShouldAcceptWeight)
{
    unordered_map<string, double> priceDB;
    priceDB["meat"] = 1.99; //Meat is 1.99/lb
    Transaction *t = new Transaction(&priceDB);
    t->scan("meat", 2.3);
    ASSERT_DOUBLE_EQ(t->calculateTotal(), priceDB["meat"] * 2.3);
}
TEST(TransactionTests, TransactionShouldAllowAddingSpecials)
{
    Transaction *t = new Transaction();
    Special *md = new Markdown("soup", .4);
    t->addSpecial(*md);
    ASSERT_EQ(t->getSpecialDB().size(), 1);
}
