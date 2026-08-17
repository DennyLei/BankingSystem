#pragma once
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
private:
    double balance;

public:
    BankAccount(double startingBalance);

    void deposit(double amount);
    void withdraw(double amount);
    void getbalance();
};

#endif