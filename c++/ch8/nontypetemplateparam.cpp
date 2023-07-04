#include <iostream>
#include <string>
using namespace std;

template<int n>
void print()
{
    cout << n << endl;
}

int main()
{
    print<5>();
    print<6>();
}