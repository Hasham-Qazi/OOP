// Function Overloading Example

//#include <iostream>
//using namespace std;
//
//class Calculator {
//public:
//    int add(int a, int b) {
//        return a + b;
//    }
//
//    double add(double a, double b) {
//        return a + b;
//    }
//
//    int multiply(int a, int b) {
//        return a * b;
//    }
//
//    double multiply(double a, double b) {
//        return a * b;
//    }
//
//    int subtract(int a, int b) {
//        return a - b;
//    }
//
//    double subtract(double a, double b) {
//        return a - b;
//    }
//
//    double divide(double a, double b) {
//        if(b != 0) return a / b;
//        else {
//            cout << "Error: Division by zero!" << endl;
//            return 0;
//        }
//    }
//};
//
//int main() {
//    Calculator calc;
//
//    cout << "Add (int): " << calc.add(5, 10) << endl;
//    cout << "Add (double): " << calc.add(5.5, 2.3) << endl;
//    cout << "Multiply: " << calc.multiply(4, 6) << endl;
//    cout << "Subtract: " << calc.subtract(20, 5) << endl;
//    cout << "Divide: " << calc.divide(10, 2) << endl;
//
//    return 0;
//}


//Operator Overloading 

//#include <iostream>
//using namespace std;
//
//class Distance {
//    int feet;
//    int inches;
//public:
//    Distance(int f = 0, int i = 0) {
//        feet = f;
//        inches = i;
//    }
//
//    // Overload == operator
//    bool operator==(const Distance& d) {
//        return (feet == d.feet && inches == d.inches);
//    }
//
//    void display() {
//        cout << feet << " feet " << inches << " inches" << endl;
//    }
//};
//
//int main() {
//    Distance d1(5, 8);
//    Distance d2(5, 8);
//    Distance d3(6, 2);
//
//    cout << "Distance 1: ";
//    d1.display();
//    cout << "Distance 2: ";
//    d2.display();
//    cout << "Distance 3: ";
//    d3.display();
//
//    if(d1 == d2)
//        cout << "d1 and d2 are equal." << endl;
//    else
//        cout << "d1 and d2 are not equal." << endl;
//
//    if(d1 == d3)
//        cout << "d1 and d3 are equal." << endl;
//    else
//        cout << "d1 and d3 are not equal." << endl;
//
//    return 0;
//}


