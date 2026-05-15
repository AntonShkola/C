#include <iostream>
#include <string>
using namespace std;

struct bankAccount
{
    int accNumber{};
    float accBalance{};
    string userName{};
};

void balanceChange(bankAccount& acc, float newSum)
{
    acc.accBalance = newSum;
}

void printAccount(const bankAccount& acc)
{
    cout << "Your account: " << acc.userName << ", " << acc.accNumber << ", " << acc.accBalance << endl;
}

int main()
{
    bankAccount account;
    float newBalance{};

    cout << "Enter account number: " << endl;
    cin >> account.accNumber;
    cin.ignore();

    cout << "Enter the owner's name: " << endl;
    getline(cin, account.userName);

    cout << "Enter account balance: " << endl;
    cin >> account.accBalance;

    cout << "Enter the new accaunt balance: " << endl;
    cin >> newBalance;

    balanceChange(account, newBalance);
    printAccount(account);

    return 0;
}
