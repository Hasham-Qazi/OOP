#include <iostream>
using namespace std;

class Person1 {
protected:
    string name;
    int age;

public:
    void input_person_info() {
    
        // Name validation: non-empty
        cout << "Enter name: ";
         getline(cin, name);
        
        while (name.length() == 0) {
            cout << "Name cannot be empty. Enter again: ";
            getline(cin, name);
        }

        // Age validation
        cout << "Enter age (1 to 150): ";
        cin >> age;
        while (age <= 0 || age > 150) {
            cout << "Invalid age. Enter again: ";
            cin >> age;
        }
    }

    void display_person_info() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Student : public Person1 {
private:
    string student_id;

public:
    void input_student_info() {
        input_person_info();

        // Student ID validation: non-empty
        cout << "Enter student ID: ";
        cin >> student_id;
        while (student_id.length() == 0) {
            cout << "Student ID cannot be empty. Enter again: ";
            cin >> student_id;
        }
    }

    void display_student_info() {
        display_person_info();
        cout << "Student ID: " << student_id << "\n";
    }
};


