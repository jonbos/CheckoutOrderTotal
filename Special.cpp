#include "Special.hpp"

Special::Special(std::string itemName)
{
    this->itemName = itemName;
}

std::string Special::getItemName()
{
    return this->itemName;
}
void Special::setItemName(std::string name)
{
    this->itemName = name;
}
double Special::calculateDiscountAmount(std::vector<Item> items)
{
    throw "Not implemented";
}
double Special::calculateNumUnits(std::vector<Item> items){
    double units = 0;
    for (Item item : items ){
        if (item.getSku() == this->getItemName()){
            units += item.getUnits();
        }
    }
    return units;
}
