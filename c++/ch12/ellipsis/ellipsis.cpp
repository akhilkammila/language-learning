#include <iostream>
#include <cstdarg>
using namespace std;

void print(int numArgs, ...)
{
    va_list list;
    va_start(list, numArgs);
    
    for(int i = 0; i < numArgs; i++) {
        cout << va_arg(list, int) << ' ';
    }
    va_end(list);
    cout << endl;
}

int main()
{
    print(3, 5, 6, 7);
    print(2, 10, 15);
}