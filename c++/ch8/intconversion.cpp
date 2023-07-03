#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int a = 5;
    unsigned int b = 10;
    cout << (a < b) << endl;
    a = 11;
    cout << (a < b) << endl;
}