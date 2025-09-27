
#include "studentinfo.h"
#include "payrollsystem.h"
#include "organization.h"
#include "device.h"


int main() {
	cin.ignore();
	//                                      Task# 01
    Student s;

    cout << "=== Enter Student Information ===\n";
    s.input_student_info();

    cout << "\n=== Student Details ===\n";
    s.display_student_info();

    


//                                           Task #02


    Manager m;

    cout << "=== Enter Manager Information ===\n";
    m.input_manager();

    cout << "\n=== Manager Details ===\n";
    m.display_manager();
    
    //                                               Task #03
   


    Developer dev;
    Designer des;

    cout << "=== Enter Developer Information ===\n";
    dev.input_developer();

    cout << "\n=== Enter Designer Information ===\n";
    des.input_designer();

    cout << "\n=== Developer Details ===\n";
    dev.display_developer();

    cout << "\n=== Designer Details ===\n";
    des.display_designer();
    //                                                  Task #04

    Photocopier p;
    cout << "=== Device Functions ===\n";

    p.print_document();
    p.scan_document();
    p.photocopy();

   


    return 0;
}









