#include <bitset>
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    x = ~x + 1;
    cout << x << endl;
    x = ~x + 1;
    cout << x << endl;
}