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

void insert_any_pos(Node*head, int idx, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    
}

void insert_at_tail(Node* head, Node* &tail, int val){
    Node* newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    // tail = tail->next;

    // Node* tmp = head;
    // while (tmp->next != NULL)
    // {
    //     tmp = tmp->next;
    // }
    // tmp->next = newNode;
    
}

void printing_node(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_any_pos(head, 1, 11);
    insert_at_tail(head, tail, 88);
    insert_at_tail(head, tail, 77);
    insert_at_tail(head, tail, 66); 

    printing_node(head); //10 11 20 30 88 77 66 
    cout << "value of tail" << tail->val; //value of tail66
    
    return 0;
}