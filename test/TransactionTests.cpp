#include <gtest/gtest.h>
#include "../Transaction.hpp"
TEST(TransactionTests, TransactionShouldInstantiateWithZeroItems){
    Transaction *t = new Transaction();
    ASSERT_EQ(t->getItems().size(), 0);
}