#ifndef N_FOR_X_SPECIAL_HPP
#define N_FOR_X_SPECIAL_HPP
#include <vector>
#include "Item.hpp"
#include "Special.hpp"
class NForXSpecial : public Special
{
private:
    int trigger;
    double price;
    int limit;
public:
    NForXSpecial();
    NForXSpecial(std::string, int, double, int=0);
    double calculateDiscountAmount(std::vector<Item>);
    int getTrigger();
    void setTrigger(int);
    double getPrice();
    void setPrice(double);
    int getLimit();
    void setLimit(int);
    int calculateNumDiscounts(std::vector<Item>);
    double calculateDiscountValue(std::vector<Item>);
};
#endif // N_FOR_X_SPECIAL_HPP
