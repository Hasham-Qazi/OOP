#include <iostream>
#include "BankAccount1.h"
#include "BankAccount2.h"
#include "Person.h"
#include "Shape.h"
using namespace std;


//Task 1 : shallow copy 

//int main() {
//    BankAccount1 acc1(1000.0f);
//    BankAccount1 acc2 = acc1; // Shallow copy
//
//    cout << "\nAfter shallow copy:\n";
//    acc1.display();
//    acc2.display();
//
//    acc2.setBalance(5000.0f); // Modifying acc2 also changes acc1
//
//    cout << "\nAfter modifying acc2:\n";
//    acc1.display();
//    acc2.display();
//
//    // Both acc1 and acc2 will try to delete the same memory
//    return 0;
////}
//
////// Task 2 : Deep copy 
////
//int main() {
//    BankAccount2 acc1(2000.0f);
//    BankAccount2 acc2 = acc1; // Deep copy
//
//    cout << "\nAfter deep copy:\n";
//    acc1.display();
//    acc2.display();
//
//    acc2.setBalance(7000.0f); // Modify acc2
//
//    cout << "\nAfter modifying acc2:\n";
//    acc1.display(); // acc1 remains unchanged
//    acc2.display();
//
//    return 0;
//}
//
//// Task 3 : Single inheritance

//int main() {
//    cout << "Task 3: Single Inheritance ===\n\n";
//
//    Student s;
//    s.setStudent("Feeza", 19, 101);
//    s.showStudent();
//
//    return 0;
//}
//
////Task 4: Constructor
//
//int main() {
//    cout << "Constructor in Inheritance ===\n\n";
//
//    Rectangle r;
//
//    cout << "Note: Base class constructor is called before derived class constructor.\n";
//
//    return 0;
//}
