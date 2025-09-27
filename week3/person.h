
#include <iostream>
using namespace std;



// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a); // Calling base class function
        rollNo = r;
    }

    void showStudent() {
        showPerson(); // Show base class info
        cout << "Roll No: " << rollNo << endl;
    }
};

