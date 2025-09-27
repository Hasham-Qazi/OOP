#include <iostream>
using namespace std;

class Employee1 {
protected:
    string name;
    float salary;

public:
    void input_employee() {
    	
        cout << "Enter name: ";
       getline(cin, name);
        while (name.length() == 0) {
            cout << "Name cannot be empty. Enter again: ";
                getline(cin, name);
          
        }

        cout << "Enter salary: ";
        cin >> salary;
        while (salary <= 0) {
            cout << "Invalid salary. Enter again: ";
            cin >> salary;
        }
    }

    void display_employee() {
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

class Developer : public Employee1 {
private:
    string programming_language;

public:
    void input_developer() {
        input_employee();

        cout << "Enter programming language: ";
        cin >> programming_language;
        while (programming_language.length() == 0) {
            cout << "Programming language cannot be empty. Enter again: ";
            cin >> programming_language;
        }
    }

    void display_developer() {
        display_employee();
        cout << "Programming Language: " << programming_language << "\n";
    }
};

class Designer : public Employee1 {
private:
    string design_tool;

public:
    void input_designer() {
        input_employee();

        cout << "Enter design tool: ";
        cin >> design_tool;
        while (design_tool.length() == 0) {
            cout << "Design tool cannot be empty. Enter again: ";
            cin >> design_tool;
        }
    }

    void display_designer() {
        display_employee();
        cout << "Design Tool: " << design_tool << "\n";
    }
};


