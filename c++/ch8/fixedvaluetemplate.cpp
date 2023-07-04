#include <iostream>
using namespace std;

template<typename T>
void print(int arg1, T arg2) {
    cout << arg1 << arg2 << endl;
}

int main()
{
    print(5, 6);
}