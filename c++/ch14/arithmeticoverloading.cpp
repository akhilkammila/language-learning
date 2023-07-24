// Overloaidng arithmetic operators using friend functions

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    friend ostream& operator << (ostream& os, Fraction& f);

    Fraction(): Fraction(0,1) {}

    Fraction(int x, int y) {
        numerator = x;
        denominator = y;
    }
};

ostream& operator << (ostream& os, Fraction& f) {
    return os << f.numerator << '/' << f.denominator;
}

int main()
{
    Fraction half = Fraction(1, 2);
    cout << half << endl;

    Fraction def = Fraction();
    cout << def << endl;

}