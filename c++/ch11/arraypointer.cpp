#include <iostream>
using namespace std;


template <int S>
void checkSize(int (&arr) [S])
{
    cout << sizeof(arr) << endl;
}

int main()
{
    int arr[4]{1,2,3,4};
    cout << sizeof(arr) << endl;
    checkSize(arr);
}