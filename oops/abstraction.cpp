#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Account {
public:
    virtual void deposit(double amount) = 0;  // Pure virtual function
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual double getBalance() const = 0;    // Pure virtual function
    virtual ~Account() = default;             // Virtual destructor
};

class SavingsAccount : public Account {
private:
    double balance;
public:
    SavingsAccount() : balance(0.0) {}

    void deposit(double amount) override {
        balance += amount;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance() const override {
        return balance;
    }
};

int main() {
    Account* myAccount = new SavingsAccount();
    myAccount->deposit(100.0);
    cout << "Balance after deposit: $" << myAccount->getBalance() << endl;

    myAccount->withdraw(50.0);
    cout << "Balance after withdrawal: $" << myAccount->getBalance() << endl;

    delete myAccount;
    return 0;
}

