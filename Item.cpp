#include "Item.hpp"

Item::Item()
{
    this->sku = "";
    this->price = 0;
    this->units = 0;
}
Item::Item(std::string sku, double price, double units)
{
    this->sku = sku;
    this->price = price;
    this->units = units;
}
std::string Item::getSku()
{
    return this->sku;
}
void Item::setSku(std::string)
{
    this->sku = sku;
}
double Item::getPrice()
{
    return this->price;
}
void Item::setPrice(double price)
{
    this->price = price;
}
double Item::getUnits()
{
    return this->units;
}
void Item::setUnits(double units)
{
    this->units = units;
}
Item::~Item()
{
}
