#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T, typename U>
auto sub(T x, U y)
{
    static int z {0};
    cout << ++z << endl;
    return x - y;
}

int main()
{
    auto a = sub(5, 2.0);
    cout << typeid(a).name() << endl;

    auto b = sub(3, 0.0);
    cout << typeid(b).name() << endl;

    auto c = sub(2.0, 5);
    cout << typeid(c).name() << endl;
}