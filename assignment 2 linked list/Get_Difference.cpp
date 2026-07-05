#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    // cout << val;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

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

    Node *tmp = head;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    int different = max_val - min_val;
    while (tmp != NULL)
    {
        if (tmp->val > max_val)
        {
            max_val = max(tmp->val, max_val);
        }
        if (tmp->val < min_val)
        {
            min_val = min(tmp->val, min_val);
        }

        tmp = tmp->next;
    }
    cout << max_val - min_val;

    return 0;
}