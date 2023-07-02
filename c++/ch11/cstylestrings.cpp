#include <iostream>
using namespace std;

int main()
{
    const char* ptr {"hello"};
    char* ptr2 {"hello"}; //warning (this is really const)
    cout << ptr;
}