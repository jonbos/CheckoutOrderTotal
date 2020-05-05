#include "Markdown.hpp"

Markdown::Markdown(std::string itemName, double discount)
{   
    this->itemName=itemName;
    this->discountPerUnit = discount;
}

double Markdown::getDiscountPerUnit()
{
    return this->discountPerUnit;
}
void Markdown::setDiscountPerUnit(double discount)
{
    this->discountPerUnit = discount;
}
double Markdown::calculateDiscountAmount(std::vector<Item> items)
{
    return this->discountPerUnit;
}
int Markdown::calculateNumDiscounts(std::vector<Item> items){
    int discounts = 0;
    for (Item item:items){
        if (item.getSku() == this->itemName){
            discounts++;
        }
    }
    return discounts;
}