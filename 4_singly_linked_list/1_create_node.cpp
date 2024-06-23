#include <bits/stdc++.h>
using namespace std;

class node {
    public: 
    int val;
    node* next;
   
};

int main() {
   
    node a,b;
    a.val = 10;
    b.val = 20;

    a.next =&b;
    b.next= NULL;

    cout<<a.val<<" "<<b.val<<endl;
    //2
    cout<< (*a.next).vall;
    //3
       cout<< a.next->vall;
    return 0;
}
