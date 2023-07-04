#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[10000];
    for(int i : arr1) {
        if (i != 0) {
            cout << "arr1 not zeroed" << endl;
            break;
        }
    }

    static int arr2[10000];
    for(int i : arr2) {
        if (i != 0) {
            cout << "arr2 not zeroed" << endl;
            break;
        }
    }

    vector<int> v1(10000);
    for(int i : v1) {
        if (i != 0) {
            cout << "v1 not zeroed" << endl;
            break;
        }
    }

    static vector<int> v2(10000);
    for(int i : v2) {
        if (i != 0) {
            cout << "v2 not zeroed" << endl;
            break;
        }
    }
}