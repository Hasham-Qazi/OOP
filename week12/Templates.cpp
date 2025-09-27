//                     TASK1....Calculator Template

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//template <typename T>
//class Calculator {
//public:
//    T add(T a, T b) { return a + b; }
//    T subtract(T a, T b) { return a - b; }
//    T multiply(T a, T b) { return a * b; }
//    T divide(T a, T b) {
//        if (b == 0)
//            throw runtime_error("Division by zero error!");
//        return a / b;
//    }
//};
//
//int main() {
//    ofstream fout("calculator_log.txt", ios::app);
//
//    Calculator<double> calc;
//    double x, y;
//    cout << "Enter two numbers: ";
//    cin >> x >> y;
//
//    try {
//        fout << "Inputs: " << x << ", " << y << endl;
//        cout << "Addition: " << calc.add(x, y) << endl;
//        fout << "Addition: " << calc.add(x, y) << endl;
//
//        cout << "Subtraction: " << calc.subtract(x, y) << endl;
//        fout << "Subtraction: " << calc.subtract(x, y) << endl;
//
//        cout << "Multiplication: " << calc.multiply(x, y) << endl;
//        fout << "Multiplication: " << calc.multiply(x, y) << endl;
//
//        cout << "Division: " << calc.divide(x, y) << endl;
//        fout << "Division: " << calc.divide(x, y) << endl;
//    }
//    catch (const runtime_error& e) {
//        cout << "Exception: " << e.what() << endl;
//        fout << "Error: " << e.what() << endl;
//    }
//
//    fout.close();
//    return 0;
//}

//                TASK2....LOGGER

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template <typename T>
class Logger {
    ofstream fout;
public:
    Logger(const string& filename) {
        fout.open(filename, ios::app);
    }
    ~Logger() {
        fout.close();
    }
    void log(T message) {
        cout << "[LOG]: " << message << endl;
        fout << "[LOG]: " << message << endl;
    }
};

int main() {
    Logger<string> strLogger("logger.txt");
    Logger<int> intLogger("logger.txt");
    Logger<double> dblLogger("logger.txt");

    strLogger.log("Application started");
    intLogger.log(404);
    dblLogger.log(3.14159);

    return 0;
}
