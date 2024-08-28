#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 30, 70};
    // cout<< myList.front() << endl;
    cout << myList.back() << endl;
    // any position
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}
