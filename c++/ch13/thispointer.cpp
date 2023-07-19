#include <iostream>
using namespace std;

class Employee
{
    int age;
    string name;

public:
    void getEmployeeAge();

    Employee() {
        age = 5;
        name = "Joe";
    }
    void getAge() {
        cout << age << endl;
    }
};

void Employee::getEmployeeAge() {
    cout << age;
}

int main()
{
    Employee e;
    e.getAge();
    e.getEmployeeAge();
}