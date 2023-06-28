#include <iostream>
using namespace std;

void add(double a, double b) {
    cout << "int then double" << endl;
}

void add(double a, char b) {
    cout << "double then int" << endl;
}

void print(int a) {
    cout << "int print" << endl;
}

// void print(double a) {
//     cout << "double print" << endl;
// }

int main() {
    print(2.5f);
}