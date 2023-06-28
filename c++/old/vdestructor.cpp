/*
Exploring virtual destructor: https://www.youtube.com/watch?v=jELbKhGkEi0&ab_channel=TheCherno
*/
#include <iostream>
using namespace std;

class Base {
    public:
        Base() {
            cout << "Base constructor" << endl;
        }

        ~Base() {
            cout << "Base destructor" << endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            cout << "Derived constructor" << endl;
        }

        ~Derived() {
            cout << "Derived destructor" << endl;
        }
};

int main() {
    Base *base = new Base();
    delete base;
    cout << endl;

    Derived* derived = new Derived();
    delete derived;
    cout << endl;

    Base* poly = new Derived();
    delete poly;
    cout << endl;
}