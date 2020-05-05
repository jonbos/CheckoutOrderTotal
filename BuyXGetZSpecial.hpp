#ifndef BUY_X_GET_Z_HPP
#define BUY_X_GET_Z_HPP
#include <vector>
#include "Item.hpp"
#include "Special.hpp"
class BuyXGetZSpecial : public Special
{
private:
    int trigger;
    int discountCount;
    double discountPercentage;

public:
    BuyXGetZSpecial(std::string, int, int, double);
    double calculateDiscountAmount(std::vector<Item>);
    int getTrigger();
    int getDiscountCount();
    double getDiscountPercentage();
};
#endif // BUY_X_GET_Z_HPP
