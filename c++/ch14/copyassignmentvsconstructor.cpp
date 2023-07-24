#include <iostream>
using namespace std;

class Fraction {
    int numerator;
    int denominator;

public:
    // Override copy constructor
    Fraction(const Fraction& f) {
        cout << "calling copy constructor" << endl;
    }

    // Override copy assignment operator
    void operator = (const Fraction f) {
        cout << "calling copy assignment operator" << endl;
    }

    // Constructor
    Fraction(int num, int den = 1) {
        cout << "calling constructor" << endl;
        numerator = num;
        denominator = den;
    }
};

int main() {
    Fraction two{2};

    Fraction twoCopy = two;
    twoCopy = two;
}