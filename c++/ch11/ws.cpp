#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string a;
    
    std::cout << "Enter a string: ";
    std::cin >> std::ws >> a;
    
    std::cout << "You entered: " << a << std::endl;
    
    return 0;
}