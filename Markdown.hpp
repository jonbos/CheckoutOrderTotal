#ifndef MARKDOWN_HPP
#define MARKDOWN_HPP
#include <vector>
#include "Item.hpp"
#include "Special.hpp"
class Markdown : public Special
{
private:
    std::string itemName;
    double discountPerUnit;
    int limit;
public:
    Markdown();
    Markdown(std::string, double, int=0);
    double getDiscountPerUnit();
    void setDiscountPerUnit(double);
    double calculateDiscountAmount(std::vector<Item>);
    int calculateNumDiscounts(std::vector<Item>);

};
#endif // MARKDOWN_HPP
