#include <iostream>
using namespace std;

int numEmployees{0};

class Employee
{
public:
    static int numEmployees;

};

int main()
{
    cout << Employee::numEmployees;
}