
#include "BankAccount.h"
#include <iostream>
using std::endl;

BankAccount::BankAccount(double startingBalance): balance(startingBalance) {
}

void BankAccount::withdraw(double amount)
{
    if (balance - amount < 0)
        std::cout << "You do not have sufficient balance in your bank account.\n";
    else
    {
        std::cout << "You have successfully withdrew $" << amount << ". Your balance is now $" << balance - amount << endl;
        balance -= amount;
    }
}
void BankAccount::deposit(double amount)
{
    if (amount <= 0)
    {
        std::cout << "Invalid amount.\n";
    }
    else
    {
        std::cout << "You have successfully deposited $" << amount << ". Your balance is now $" << balance + amount << endl;
        balance += amount;
    }
}
void BankAccount::getbalance()
{
    std::cout << "Your current balance is " << balance << endl;
}
