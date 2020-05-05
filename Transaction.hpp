#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP
#include <unordered_map>
#include <vector>
#include <string>
#include "Item.hpp"
using namespace std;
class Transaction
{
private:
    vector<Item> items;
    unordered_map<string, double> priceDB;

public:
    Transaction();
    Transaction(unordered_map<string, double> *priceDB);
    ~Transaction();
    vector<Item> getItems();
    unordered_map<string, double> getPriceDB();
    void scan(std::string, double=1.0);
    double calculateTotal();
};
#endif // !TRANSACTION_HPP