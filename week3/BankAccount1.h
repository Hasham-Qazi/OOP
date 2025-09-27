
#include <iostream>
using namespace std;


class BankAccount1 {
private:
    float* balance; // pointer to dynamically allocated memory

public:
    // Constructor: dynamically allocates memory
    BankAccount1(float bal) {
        balance = new float;
        *balance = bal;
        cout << "Constructor called. Balance: " << *balance << endl;
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
    ~BankAccount1() {
        cout << "Destructor called. Deleting balance: " << *balance << endl;
        delete balance;
    }
};

