#include <iostream>
using namespace std;

struct a {
    char b;
    char d;
    int c;
};

int main() {
    struct a test = a{'a', 'b', 23};

    cout << &test << endl;
    cout << static_cast<void*>(&(test.b)) << endl;
    cout << static_cast<void*>(&(test.d)) << endl;
    cout << &(test.c) << endl;
}