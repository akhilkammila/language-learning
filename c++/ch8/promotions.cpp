#include <iostream>
using std::cout;
using std::endl;

void convertCharToInt(char a) {
    int b = a;
    cout << b << std::endl;
}

void convertUnsignedToSigned(unsigned int a) {
    int b = a;
    cout << b << endl;
}

void convertSignedToUnsigned(int a) {
    unsigned int b = a;
    cout << b << endl;
}

int main() {
    unsigned int a = 4294967294;
    convertUnsignedToSigned(a);
}