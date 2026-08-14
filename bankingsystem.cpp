#include <iostream>
using std::endl;
class BankAccount {
    private:
        double balance = 500.0;

    public:
        void withdraw(double amount){
            if(balance-amount < 0)std::cout << "You do not have sufficient balance in your bank account.\n";
            else{
                std::cout << "You have successfully withdrew $" << amount << ". Your balance is now $" << balance - amount << endl;
                balance-=amount;
            }
        }
        void deposit(double amount){
            if(amount <= 0){
                std::cout << "Invalid amount.\n";
            }
            else{
            std::cout << "You have successfully deposited $" << amount << ". Your balance is now $" << balance + amount << endl;
            balance+=amount;
            }
        }
        void getbalance(){
            std::cout << "Your current balance is " << balance << endl;
        }
};




int main(){
    char action; double money;
    BankAccount account;
    do{
        std::cout << "What would you like to do today?\nDeposit(d), Withdraw(w), Check Balance(b), or Exit(x)\n";
        std::cin >> action;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input.\n";
            continue;
        }
        if(action == 'd'){
            std::cout << "How much money would you like to deposit today? \n";
            std::cin >> money;
            account.deposit(money);
        }
        else if(action == 'w'){
            std::cout << "How much money would you like to withdraw today? \n";
            std::cin >> money;
            account.withdraw(money);
        }
        else if(action == 'b'){
            account.getbalance();
        }
        else if(action == 'x'){
            std::cout << "Goodbye! \n";
        }
        else{
            std::cout << "You have not selected an actionable request. \n";
        }
    }while(action != 'x');
    return 0;
}
