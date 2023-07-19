#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    auto start = chrono::high_resolution_clock::now();
    int a = 10;
    for(long long i = 0; i < 1000000000LL; i++) {
        a += i;
    }
    cout << a << endl;
    auto start = chrono::high_resolution_clock::now();
    auto end = chrono::high_resolution_clock::now();
    auto dif = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << dif.count();

    return 0;
}