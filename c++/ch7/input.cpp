#include <iostream>
#include <cassert>
#include <unistd.h>
using namespace std;

int main() {
    int x = 5;
    string y;

    std::cin >> x;
    assert(x > 5);
    std::cout << x << std::endl;
}