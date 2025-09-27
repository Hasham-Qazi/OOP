//                 TASK1....Program to handle dividing by zero exception

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b;
//    cout << "Enter two numbers (a / b): ";
//    cin >> a >> b;
//
//    try {
//        if (b == 0)
//            throw runtime_error("Division by zero is not allowed!");
//        cout << "Result = " << a / b << endl;
//    }
//    catch (const runtime_error& e) {
//        cout << "Exception caught: " << e.what() << endl;
//    }
//
//    return 0;
//}

//                TASK2....Program with array of size 3 and index validation

//#include <iostream>
//using namespace std;
//
//int main() {
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
//        cout << "Value stored successfully!\nArray contents: ";
//        for (int i = 0; i < 3; i++)
//            cout << arr[i] << " ";
//        cout << endl;
//    }
//    catch (const out_of_range& e) {
//        cout << "Exception: " << e.what() << endl;
//    }
//
//    return 0;
//}

    
