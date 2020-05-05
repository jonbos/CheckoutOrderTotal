#include <gtest/gtest.h>
#include "../Transaction.hpp"
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
