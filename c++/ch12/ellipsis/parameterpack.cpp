// https://en.cppreference.com/w/cpp/language/parameter_pack
// template with at least 1 parameter pack: variadic template

#include <iostream>
using namespace std;

template <typename T>
T sum(T arg1)
{
    return arg1;
}

template<typename T, typename... Args>
T sum(T arg1, Args... args)
{
    return arg1 + sum(args...);
}


int main()
{
    cout << sum(5, 6, 7, 8, 9);
}