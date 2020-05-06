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
    int limit;
    int calculateNumDiscounts(int);
    double calculateDiscountValue(double);
    int getTotalUnits(std::vector<Item>);

public:
    BuyXGetZSpecial(std::string, int, int, double, int=0);
    double calculateDiscountAmount(std::vector<Item>);
    int getTrigger();
    int getDiscountCount();
    double getDiscountPercentage();
};
#endif // BUY_X_GET_Z_HPP
