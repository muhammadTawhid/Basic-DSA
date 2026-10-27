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

class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){   //o(1)
        return head->val;
    }

    int back(){   //o(1)
        return tail->val;
    }
    int size(){   //o(1)
        return sz;
    }

    bool empty(){   //o(1)
        return head == NULL;
    }
};

int main(){

    //taking input of queue
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // cout << q.front() <<" front";
    // cout << q.back() << "back";
    // cout << q.size() << "size";

    while (!q.empty())
    {
        cout << q.front() << "front";
        q.pop();
    }
    
    
    
    return 0;
}