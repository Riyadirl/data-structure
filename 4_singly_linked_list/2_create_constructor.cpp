  #include <bits/stdc++.h>
using namespace std;

class node {
    public: 
    int val;
    node* next;

    node(int val){
        this->val =val;
        this->next =NULL;
    }
   
};

int main() {
   node a(10);
   node b(20);

    cout<<a.val<<" "<<b.val<<endl;
    //2
    cout<< (*a.next).vall;
    //3
       cout<< a.next->vall;
    return 0;
}
