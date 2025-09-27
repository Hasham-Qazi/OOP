//Runtime Polymorphism (Virtual Function Example)

#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() override {
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shape;

    Rectangle rect(10, 5);
    Circle circ(7);

    shape = &rect;
    cout << "Rectangle Area = " << shape->area() << endl;

    shape = &circ;
    cout << "Circle Area = " << shape->area() << endl;

    return 0;
}
