#include <iostream>
//using namespace std;
//
//class Product {
//protected:
//    string name;
//    double price;
//
//public:
//    Product(string n, double p) {
//        name = n;
//        price = p;
//        cout << "Product Constructor Called\n";
//    }
//
//    void display() {
//        cout << "Name: " << name << ", Price: " << price << endl;
//    }
//};
//
//class Electronics : public Product {
//private:
//    int warrantyYears;
//
//public:
//    Electronics(string n, double p, int w) : Product(n, p) {
//        warrantyYears = w;
//        cout << "Electronics Constructor Called\n";
//    }
//
//    void show() {
//        display();
//        cout << "Warranty: " << warrantyYears << " years\n";
//    }
//};
//
//int main() {
//    Electronics e("Laptop", 120000, 2);
//    e.show();
//}

                          // Task o2//       
                         
// #include <iostream>
//using namespace std;
//
//class Vehicle {
//public:
//    Vehicle() {
//        cout << "Vehicle Constructor Called\n";
//    }
//};
//
//class Car : public Vehicle {
//public:
//    Car() {
//        cout << "Car Constructor Called\n";
//    }
//};
//
//class ElectricCar : public Car {
//public:
//    ElectricCar() {
//        cout << "Electric Car Constructor Called\n";
//    }
//};
//
//int main() {
//    ElectricCar ec;
//}
//

                  // TASK 03//


//#include <iostream>
//using namespace std;
//
//class File {
//public:
//    File() {
//        cout << "File opened\n";
//    }
//
//    ~File() {
//        cout << "File closed\n";
//    }
//};
//
//class TextFile : public File {
//public:
//    TextFile() {
//        cout << "TextFile created\n";
//    }
//
//    ~TextFile() {
//        cout << "TextFile destroyed\n";
//    }
//};
//
//int main() {
//    TextFile t;
//}

            // TASK 04//         

#include <iostream>
using namespace std;

class Device {
protected:
    string deviceName;
    int deviceID;
    int* data;

public:
    Device(string name, int id) {
        deviceName = name;
        deviceID = id;
        data = new int(100); // dynamic allocation
        cout << "Device Constructor Called\n";
    }

    ~Device() {
        delete data;
        cout << "Device Destructor Called\n";
    }
};

class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue;

public:
    Sensor(string name, int id, string type, float value)
        : Device(name, id) {
        sensorType = type;
        sensorValue = new float(value);
        cout << "Sensor Constructor Called\n";
    }

    ~Sensor() {
        delete sensorValue;
        cout << "Sensor Destructor Called\n";
    }
};

int main() {
    Sensor* s = new Sensor("TempDevice", 101, "Temperature", 36.5);

    delete s;  
}
