#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
class Item
{
private:
    std::string sku;
    double price;

public:
    Item();
    Item(std::string, double);
    ~Item();
    std::string getSku();
    void setSku(std::string);
    double getPrice();
    void setPrice(double);
};

#endif // ITEM_HPP