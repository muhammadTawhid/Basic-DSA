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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    Node* tmp = head; // don't move head because head is the main node, that's why creating tmp; 
    while(tmp != NULL){ 
        cout << tmp->val; //10 20 30 40
        tmp = tmp->next;
    }

    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val; ////10 20 30 40
        tmp = tmp->next;
    }
    
    return 0;
}