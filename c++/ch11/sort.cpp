#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v {0,2,3,1,5};
    sort(v.begin(), v.end(), greater{});
    cout << v[0];
}