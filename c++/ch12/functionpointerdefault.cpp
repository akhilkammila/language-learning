#include <iostream>
using namespace std;

void defaultFunction(int x = 10)
{
    cout << x << endl;
}

int main()
{
    defaultFunction();

    void (*fcnPtr)(int) {&defaultFunction};
    fcnPtr(5);
    fcnPtr2();
}