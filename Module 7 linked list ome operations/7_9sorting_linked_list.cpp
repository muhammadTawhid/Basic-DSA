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
    // cout << tail->val;
    tail->next = newNode;
    tail = newNode;
    
}

void sorting_node(Node* head){
    for (Node* i = head; i->next != NULL ; i = i->next)
    {
       for (Node* j = i->next; j->next != NULL; j = j->next)
       {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
            
       }
       
    }
    
}

void printing_node(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    // cout << head->val;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val; //70 55 66 78 34 52
        if (val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    sorting_node(head);
    printing_node(head); //34 55 66 70 78 52 
    
    return 0;
}

