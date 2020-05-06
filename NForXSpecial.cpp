/**
    CIS161 
    NForXSpecial.cpp
    Purpose: Represents a N For $X special in a POS system

    @author Jon Bos
*/
#include "NForXSpecial.hpp"
NForXSpecial::NForXSpecial(std::string itemName, int trigger, double price, int limit) : Special(itemName)
{
    this->trigger = trigger;
    this->price = price;
    this->limit = limit;
}

double NForXSpecial::calculateDiscountAmount(std::vector<Item> items)
{
    return this->calculateNumDiscounts(items) * this->calculateDiscountValue(items);
}
int NForXSpecial::getTrigger()
{
    return this->trigger;
}
void NForXSpecial::setTrigger(int trigger)
{
    this->trigger = trigger;
}
double NForXSpecial::getPrice()
{
    return this->price;
}
void NForXSpecial::setPrice(double price)
{
    this->price = price;
}
int NForXSpecial::getLimit()
{
    return this->limit;
}
void NForXSpecial::setLimit(int limit)
{
    this->limit = limit;
}
int NForXSpecial::calculateNumDiscounts(std::vector<Item> items)
{
    double totalUnits = this->calculateNumUnits(items);
    if (this->limit > 0)
    {
        totalUnits = std::min(totalUnits, static_cast<double>(limit));
    }
    return static_cast<int>(totalUnits) / this->trigger;
}
double NForXSpecial::calculateDiscountValue(std::vector<Item> items){
    if (!items.size()>0){
        return 0;
    }
    double price = items[0].getPrice();
    return (price*this->trigger) - this->price;
}
