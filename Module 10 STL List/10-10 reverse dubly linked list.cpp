#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void reverse_doubly_list(Node* head, Node* tail){
    for (Node *i = head, *j = tail; i!=j && i->prev !=j; i=i->next, j=j->prev)
    {
        swap(i->val, j->val);
    }
    
}

void print_forward(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}

void print_backward(Node* tail){
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    

    insert_at_head(head, 100);
    // insert_at_tail(head, tail, 33);
    reverse_doubly_list(head, tail);
    print_forward(head);

    
    return 0;
}