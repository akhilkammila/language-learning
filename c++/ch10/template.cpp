#include <iostream>
using namespace std;

template <typename T>
struct Pair {
    T first {};
    T second {};
};

template <typename T>
Pair(T, T) -> Pair<T>;

int main() {
    Pair a = Pair{5, 6};
    cout << a.first << endl;
    cout << a.second << endl;
}