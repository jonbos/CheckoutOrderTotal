#include "Transaction.hpp"
Transaction::Transaction()
{
}
Transaction::Transaction(unordered_map<string, double> *priceDB)
{
    this->priceDB = *priceDB;
}

unordered_map<string, double> Transaction::getItems()
{
    return this->items;
}
unordered_map<string, double> Transaction::getPriceDB()
{
    return this->priceDB;
}