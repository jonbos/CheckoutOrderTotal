#include "Transaction.hpp"
Transaction::Transaction()
{
    this->items = vector<Item>();
    this->priceDB = unordered_map<string, double>();
}
Transaction::Transaction(unordered_map<string, double> *priceDB)
{
    this->priceDB = *priceDB;
    this->items = vector<Item>();
}

vector<Item> Transaction::getItems()
{
    return this->items;
}
unordered_map<string, double> Transaction::getPriceDB()
{
    return this->priceDB;
}
void Transaction::scan(std::string sku, double units)
{
    Item *i = new Item(sku, this->priceDB[sku], units);
    this->items.push_back(*i);
}
double Transaction::calculateTotal()
{
    double total = 0;
    for (Item item : this->items)
    {
        total += item.getPrice() * item.getUnits();
    }
    return total;
}
void Transaction::addSpecial(Special special)
{
    this->specialDB.push_back(special);
}
vector<Special> Transaction::getSpecialDB()
{
    return this->specialDB;
}
void Transaction::setSpecialDB(vector<Special> specials)
{
    this->specialDB = specials;
}
