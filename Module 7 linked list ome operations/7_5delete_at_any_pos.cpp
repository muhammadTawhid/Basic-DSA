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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    
}

void delete_at_any_pos(Node* head, int idx){
    Node* tmp = head;
    for (int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void printing_node(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<< " ";
        tmp = tmp->next;
    }
    
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val; // input 10 20 30 40 50 -1
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    delete_at_any_pos(head, 2); //10 20 40 50 
    printing_node(head); //10 20 40 50 
    
    
    return 0;
}