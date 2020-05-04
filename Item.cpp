#include "Item.hpp"

Item::Item()
{
    this->sku = "";
    this->price = 0;
}
Item::Item(std::string sku, double price)
{
    this->sku = sku;
    this->price = price;
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
void Item::setPrice(double)
{
    this->price = price;
}

Item::~Item()
{
}
