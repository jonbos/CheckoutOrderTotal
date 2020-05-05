#ifndef MARKDOWN_HPP
#define MARKDOWN_HPP
#include <vector>
#include "Item.hpp"
class Markdown
{
private:
    std::string itemName;
    double discountPerUnit;
public:
    Markdown();
    Markdown(std::string, double);
    double getDiscountPerUnit();
    void setDiscountPerUnit(double);
    double calculateDiscountAmount(std::vector<Item>);
    int calculateNumDiscounts(std::vector<Item>);

};
#endif // MARKDOWN_HPP
