/*
Vtable explanation: https://www.youtube.com/watch?v=47ZP-0iBicI&ab_channel=KeertiPurswani

Vtable is created for each class that has virtual functions, or inherits from a class that has virtual functions
Compiler will look at the vtable and see if has to call the base class or the inherited class function

Vtables are static
Vpointer is associated with an object, and points to the DERIVED CLASS's vtable
There is no dynamic dispatch for objects – only pointers or references
*/

#include <iostream>
#include <vector>
using namespace std;

// Base class with virtual functions
class Employee {
    public:
        int a = 10;
        virtual void raiseSalary() {
            cout << "employee salary raised" << endl;
        }

        void promote() {
            cout << "employee promoted" << endl;
        }
};

// Inherited class
class Manager : public Employee {
    public:
        int a = 20;
        long long b = 30;
        void raiseSalary(){
            cout << "manager salary raised" << endl;
        }

        void propote() {
            cout << "manager promoted" << endl;
        }
};

void testNotVirtual() {
    Employee *e1 = new Employee();
    Employee *e2 = new Manager();

    e1->promote();
    e2->promote();
}

void testVirtual() {
    Employee *e1 = new Employee();
    Employee *e2 = new Manager();

    e1->raiseSalary();
    e2->raiseSalary();
}

void testVPointers() {
    // Employee has size 16
    Employee e1 = Employee();
    cout << sizeof(Employee) << endl;
    cout << sizeof(e1) << endl;
    cout << e1.a << endl;

    // Manager has size 24
    Manager m1 = Manager();
    cout << sizeof(Manager) << endl;
    cout << sizeof(m1) << endl;
    cout << m1.a << endl;

    // e2 is simply an employee – manager has been sliced. there is no dynamic dispatch for objects
    // e3 is an employee (size 16), but has a vtable pointer to the manager vtable
    // thus e3 has access to Manager's raiseSalary, despite being an employee
    // as e3 is an employee, it cannot access manager's variable a or b
    Employee e2 = Manager();
    Employee *e3 = new Manager();
    e2.raiseSalary();
    e3->raiseSalary();
    cout << e2.a << endl;
    cout << e3->a << endl;


    cout << sizeof(e2) << endl;
    cout << sizeof(*e3) << endl;
}

int main() {
    testVPointers();
}