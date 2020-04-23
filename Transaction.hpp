#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP
#include <unordered_map>
#include <string>
using namespace std;
class Transaction
{
private:
    unordered_map<string, double> items;
public:
    Transaction();
    ~Transaction();
    unordered_map<string, double> getItems();
};
#endif // !TRANSACTION_HPP