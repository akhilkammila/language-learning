#include <iostream>
using namespace std;

class Fraction {
    int numerator;
    int denominator;

    // Fraction(char c) = delete;

public:
    friend ostream& operator << (ostream& os, Fraction f);

    explicit Fraction(int numerator, int denominator = 1) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
};

ostream& operator << (ostream& os, Fraction f) {
    return os << f.numerator << '/' << f.denominator;
}

void printFraction (const Fraction& f) {
    cout << f << endl;
}

int main() {
    // Fraction one = 'b'; //works only if delete and explicit are not there
    // Fraction two{'a'}; //works without delete statement (even if explicit is there)
    // printFraction(two);

    printFraction(static_cast<Fraction>('c')); //works without delete (even if explicit is there)
}