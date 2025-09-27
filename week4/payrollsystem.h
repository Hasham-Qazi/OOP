#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void input_person() {
        
        
        cout << "Enter name: ";
        getline(cin, name);
        while (name.length() == 0) {
           cout << "Name cannot be empty. Enter again: ";
           getline(cin, name);
        }

        cout << "Enter age (1 to 150): ";
        cin >> age;
        while (age <= 0 || age > 150) {
            cout << "Invalid age. Enter again: ";
            cin >> age;
        }
    }

    void display_person() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Employee : public Person {
protected:
    string employee_id;

public:
    void input_employee() {
        input_person();

        cout << "Enter employee ID: ";
        cin >> employee_id;
        while (employee_id.length() == 0) {
            cout << "Employee ID cannot be empty. Enter again: ";
            cin >> employee_id;
        }
    }

    void display_employee() {
        display_person();
        cout << "Employee ID: " << employee_id << "\n";
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void input_manager() {
        input_employee();

        cout << "Enter department: ";
        cin >> department;
        while (department.length() == 0) {
            cout << "Department cannot be empty. Enter again: ";
            cin >> department;
        }
    }

    void display_manager() {
        display_employee();
        cout << "Department: " << department << "\n";
    }
};


