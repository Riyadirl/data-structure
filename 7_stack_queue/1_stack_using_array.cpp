#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val); // O(1)
    }
    void pop()
    {
        v.pop_back(); // O1
    }
    int top()
    {
        return v.back(); // O1
    }
    int size()
    {
        return v.size(); // O1
    }
    bool empty()
    {
        if (v.size() == 0) // o1
            return true;
        else
            return false;
    }
};

int main()
{

    // myStack st;
    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;

    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    // cout << st.top() << endl;

    while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
