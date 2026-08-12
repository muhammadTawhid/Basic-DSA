#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(1);
    Node* a = new Node(2);
    Node* b = new Node(2);
    Node* c = new Node(2);
    Node* d = new Node(2);
    Node* e = new Node(2);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = b;

    Node* slow = head;
    Node* fast = head;

    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {   
            flag = true;
            break;
        }
        
    }

    // if (flag == true)
    // {
    //     cout << "detected";
    // }
    // else
    // {
    //     cout << "not detected";
    // }
    
    
    
    cout << (flag==true ? "Detected" : "not detected");
    
    return 0;
}