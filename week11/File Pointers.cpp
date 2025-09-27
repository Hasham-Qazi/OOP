//            EXAMPLE ONE.....Division by zero with file handling

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ofstream fout("division_log.txt", ios::app);
//
//    int a, b;
//    cout << "Enter two numbers (a / b): ";
//    cin >> a >> b;
//
//    try {
//        if (b == 0)
//            throw runtime_error("Division by zero is not allowed!");
//        int result = a / b;
//        cout << "Result = " << result << endl;
//        fout << "Division: " << a << " / " << b << " = " << result << endl;
//    }
//    catch (const runtime_error& e) {
//        cout << "Exception: " << e.what() << endl;
//        fout << "Error: " << e.what() << endl;
//    }
//
//    fout.close();
//    return 0;
//}

//                 EXAMPLE TWO....Array with Index Validation (with file handling)

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ofstream fout("array_log.txt", ios::app);
//
//    int arr[3] = {0, 0, 0};
//    int index, value;
//
//    cout << "Enter index (0-2): ";
//    cin >> index;
//    cout << "Enter value: ";
//    cin >> value;
//
//    try {
//        if (index < 0 || index >= 3)
//            throw out_of_range("Invalid index! Must be between 0 and 2.");
//        arr[index] = value;
//
//        cout << "Value stored successfully!\n";
//        fout << "Stored value " << value << " at index " << index << endl;
//    }
//    catch (const out_of_range& e) {
//        cout << "Exception: " << e.what() << endl;
//        fout << "Error: " << e.what() << endl;
//    }
//
//    fout << "Array contents: ";
//    for (int i = 0; i < 3; i++)
//        fout << arr[i] << " ";
//    fout << endl;
//
//    fout.close();
//    return 0;
//}

//               EXAMPLE THREE....Calculator Template (with exception + file handling)

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

//                  EXAMPLE FOUR.....Logger Class Template (file-based logging)

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//template <typename T>
//class Logger {
//    ofstream fout;
//public:
//    Logger(const string& filename) {
//        fout.open(filename, ios::app);
//    }
//    ~Logger() {
//        fout.close();
//    }
//    void log(T message) {
//        cout << "[LOG]: " << message << endl;
//        fout << "[LOG]: " << message << endl;
//    }
//};
//
//int main() {
//    Logger<string> strLogger("logger.txt");
//    Logger<int> intLogger("logger.txt");
//    Logger<double> dblLogger("logger.txt");
//
//    strLogger.log("Application started");
//    intLogger.log(404);
//    dblLogger.log(3.14159);
//
//    return 0;
//}

