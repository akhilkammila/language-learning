#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 6;
    const int* ptr1 {&x};
    ptr1 = &y;
}