#include <iostream>
using namespace std;

int main() {
    switch (1)
    {
        int a; // okay: definition is allowed before the case labels

        case 1:
            int y; // okay but bad practice: definition is allowed within a case
            y = 4; // okay: assignment is allowed
            break;

        case 2:
            int z{ 4 }; // illegal: initialization is not allowed if subsequent cases exist
            y = 5; // okay: y was declared above, so we can use it here too
            break;

        case 3:
            break;
    }
}