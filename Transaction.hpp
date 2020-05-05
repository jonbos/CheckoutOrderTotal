#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP
#include <unordered_map>
#include <vector>
#include <string>
#include "Item.hpp"
#include "Special.hpp"
using namespace std;
class Transaction
{
private:
    vector<Item> items;
    unordered_map<string, double> priceDB;
    vector<Special> specialDB;

public:
    Transaction();
    Transaction(unordered_map<string, double> *priceDB);
    ~Transaction();
    vector<Item> getItems();
    unordered_map<string, double> getPriceDB();
    vector<Special> getSpecialDB();
    void setSpecialDB(vector<Special>);
    void scan(std::string, double=1.0);
    double calculateTotal();
    void addSpecial(Special);
};
#endif // !TRANSACTION_HPP