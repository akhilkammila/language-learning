#include <iostream>
using namespace std;

int& passByReference(int& a) {
    cout << a << endl;
    a++;
    return a;
}

int main() {
    int x = 5;
    int& y = passByReference(x);
    cout << y << endl;
    y++;
    cout << x << endl;

    cout << "------" << endl;

    auto z = passByReference(x);
    cout << z << endl;
    z++;
    cout << x << endl;
}