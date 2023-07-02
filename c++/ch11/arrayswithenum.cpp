#include <iostream>
using namespace std;


enum Animals
{
    dog=2,
    cat=1,
    pigeon=0,
    numAnimals=3
};

int main()
{
    int zoo[numAnimals]{2,3,4};
    zoo[pigeon] = 0;
    cout << zoo[0] << ' ' << zoo[1] << ' ' << zoo[2] << endl;
}