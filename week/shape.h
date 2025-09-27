
#include <iostream>
using namespace std;


// Base class
class Shape {
public:
    Shape() {
        cout << "Shape constructor called" << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle() {
        cout << "Rectangle constructor called" << endl;
    }
};

