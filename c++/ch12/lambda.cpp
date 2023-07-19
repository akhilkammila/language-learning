#include <iostream>
using namespace std;

int main()
{
    int a = 5; int b = 6;

    auto myFunction = 
    [a, b]() -> int{
        return a + b;
    };
    cout << myFunction();
}