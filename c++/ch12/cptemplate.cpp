#include <iostream>
#include <string>
using namespace std;

#define DEBUG(...) debug(#__VA_ARGS__, __VA_ARGS__)

template <typename T>
void debug(string s, T x) { cerr << "\033[1;35m" << s << "\033[0;32m = \033[33m" << x << "\033[0m\n"; }

template <typename T, typename... Args>
void debug(string s, T x, Args... args)
{
    cout << s << endl;
    for (int i = 0, b = 0; i < (int)s.size(); i++) {
        if (s[i] == '(' || s[i] == '{')
            b++;
        else if (s[i] == ')' || s[i] == '}')
            b--;
        else if (s[i] == ',' && b == 0)
        {
            cerr << "\033[1;35m" << s.substr(0, i) << "\033[0;32m = \033[33m" << x << "\033[31m | ";
            debug(s.substr(s.find_first_not_of(' ', i + 1)), args...);
            break;
        }
    }
}

int main()
{
    int x = 5;
    int y = 10;
    DEBUG(x,y);
}