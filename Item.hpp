#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
class Item
{
private:
    std::string sku;
    double price;
    double units;

public:
    Item();
    Item(std::string, double, double);
    ~Item();
    std::string getSku();
    void setSku(std::string);
    double getUnits();
    void setUnits(double);
    double getPrice();
    void setPrice(double);
};

#endif // ITEM_HPP