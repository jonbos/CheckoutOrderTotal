#include "Transaction.hpp"
Transaction::Transaction(){
}
unordered_map<string, double> Transaction::getItems()
{
    return this->items;
}