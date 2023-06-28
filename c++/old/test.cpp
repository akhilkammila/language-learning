# include <iostream>

constexpr inline int greater(int x, int y) {
    return std::max(x, y);
}

int main()
{
    constexpr int x{5};
    constexpr int y{6};
    constexpr int z{greater(x, y)};
    std::cout << z << std::endl;

    int a, b;
    std::cin >> a;
    std::cin >> b;
    constexpr int c = greater(a, b);
    std::cout << c << std::endl;
}