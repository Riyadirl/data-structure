#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1
    vector<int> v; //> 0 size

    // 2
    vector<int> v(5); // 5 size

    // 3
    vector<int> v(5, 10); // 10 10 10 10 10 , size 5

    // 4
    vector<int> v(5, 100);
    vector<int> v1(v); // copy v vector

    // 5 array
    int a[4] = {1, 2, 3, 4};
    vector<int> v(a, a + 4);

    // 6
    vector<int> v = {3, 5, 7};

    cout << v.size();
    return 0;
}
