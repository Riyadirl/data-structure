#include <bits/stdc++.h>
using namespace std;

// main and function same change
void fun(int *&p)
{
    cout << p;
}
int main()
{
    int val = 10;
    int *ptr = &val;  
    fun(ptr);
    cout << &ptr << endl;
    return 0;
}
