#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP
#include <unordered_map>
#include <string>
using namespace std;
class Transaction
{
private:
    unordered_map<string, double> items;
    unordered_map<string, double> priceDB;

public:
    Transaction();
    Transaction(unordered_map<string, double> *priceDB);
    ~Transaction();
    unordered_map<string, double> getItems();
    unordered_map<string, double> getPriceDB();
};
#endif // !TRANSACTION_HPP