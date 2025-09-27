
#include <iostream>
using namespace std;

class BankAccount2 {
private:
    float* balance;

public:
    // Constructor
    BankAccount2(float bal) {
        balance = new float;
        *balance = bal;
        cout << "Constructor called. Balance: " << *balance << endl;
    }

    // Deep Copy Constructor
    BankAccount2(const BankAccount2& other) {
        balance = new float;
        *balance = *(other.balance);
        cout << "Deep Copy Constructor called. Copied balance: " << *balance << endl;
    }

    // Display function
    void display() const {
        cout << "Balance: " << *balance << endl;
    }

    // Modify balance
    void setBalance(float newBalance) {
        *balance = newBalance;
    }

    // Destructor
    ~BankAccount2() {
        cout << "Destructor called. Deleting balance: " << *balance << endl;
        delete balance;
    }
};

