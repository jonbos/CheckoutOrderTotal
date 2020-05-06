#include "NForXSpecial.hpp"
NForXSpecial::NForXSpecial(std::string itemName, int trigger, double price, int limit) : Special(itemName)
{
    this->trigger = trigger;
    this->price = price;
    this->limit = limit;
}

double NForXSpecial::calculateDiscountAmount(std::vector<Item> items)
{
    return 0;
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
