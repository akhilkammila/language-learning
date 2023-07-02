#include <iostream>
using namespace std;

struct Employee
{
    int age {};
    int name {};
    double salary {};
};

int main() {
    Employee joe;
    cout << joe.age << ' ' << joe.name << ' ' << joe.salary;
}