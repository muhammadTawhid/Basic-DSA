#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
};

int main(){
    Node a, b, c;
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << c.val; // 30
    cout <<"value of b" << (*a.next).val; // 20
    cout << a.next->val; // 20 value of b;
    return 0;
}