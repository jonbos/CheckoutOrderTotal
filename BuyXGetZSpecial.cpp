#include "BuyXGetZSpecial.hpp"
BuyXGetZSpecial::BuyXGetZSpecial(std::string itemName, int trigger, int discountCount, double discountPercentage) : Special(itemName)
{
    this->trigger = trigger;
    this->discountCount = discountCount;
    this->discountPercentage = discountPercentage;
}

double BuyXGetZSpecial::calculateDiscountAmount(std::vector<Item> items)
{
    double totalUnits = this->getTotalUnits(items);
    double itemPrice = items[0].getPrice();

    int numDiscounts = this->calculateNumDiscounts(totalUnits);

    return this->calculateDiscountValue(itemPrice) * numDiscounts * this->discountPercentage;
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
int BuyXGetZSpecial::calculateNumDiscounts(int numUnits)
{
    return static_cast<int>(numUnits) / (this->trigger + this->discountCount);
}
double BuyXGetZSpecial::calculateDiscountValue(double itemPrice)
{
    return (itemPrice * (this->discountPercentage));
}
int BuyXGetZSpecial::getTotalUnits(std::vector<Item> items)
{
    int units = 0;
    for (Item item : items)
    {
        if (item.getSku() == itemName)
        {
            units += item.getUnits();
        }
    }
    return units;
}
