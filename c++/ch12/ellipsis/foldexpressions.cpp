#include <iostream>
using namespace std;

template <typename ...Args>
int sum(Args... args)
{
    return (... + args);
}

int main()
{
    cout << sum(1, 2, 3);
}