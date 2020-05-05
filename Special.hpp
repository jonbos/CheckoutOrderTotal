#ifndef SPECIAL_HPP
#define SPECIAL_HPP
#include <vector>
#include <string>
#include "Item.hpp"
class Special
{
private:
    std::string itemName;
public:
    Special();
    Special(std::string);
    void setItemName(std::string name);
    std::string getItemName();
    virtual double calculateDiscountAmount(std::vector<Item>);
};
#endif // SPECIAL_HPP
