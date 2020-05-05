#include "Markdown.hpp"
Markdown::Markdown(std::string itemName, double discount, int limit) :
    Special(itemName)
{
    this->discountPerUnit = discount;
    this->limit = limit;
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
    return this->discountPerUnit * this->calculateNumDiscounts(items);
}
int Markdown::calculateNumDiscounts(std::vector<Item> items)
{
    int discounts = 0;

    for (Item item : items)
    {
        if (item.getSku() == this->getItemName())
        {
            discounts++;
        }
    }
    if (this->limit > 0)
    {
        discounts = std::min(this->limit, discounts);
    }
    return discounts;
}