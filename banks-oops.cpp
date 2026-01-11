#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) { //initialize
        accountNumber = accNum;
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance" << endl;
        } 
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {

    BankAccount B1("ACC123");  // create account with number

    B1.deposit(500);   
    B1.withdraw(200);  
    B1.checkBalance(); 

    return 0;
}
