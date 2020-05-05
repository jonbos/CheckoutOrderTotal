#include "BuyXGetZSpecial.hpp"
BuyXGetZSpecial::BuyXGetZSpecial(std::string itemName, int trigger, int discountCount, double discountPercentage) : Special(itemName)
{
    this->trigger = trigger;
    this->discountCount = discountCount;
    this->discountPercentage = discountPercentage;
}

double BuyXGetZSpecial::calculateDiscountAmount(std::vector<Item> items)
{
    return 0.0;
}
int BuyXGetZSpecial::getTrigger()
{
    return this->trigger;
}
int BuyXGetZSpecial::getDiscountCount()
{
    return this->discountCount;
}
double BuyXGetZSpecial::getDiscountPercentage()
{
    return this->discountPercentage;
}
