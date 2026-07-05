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

void insert_at_head(Node *&head, int val, Node* &tail)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    if (tail == NULL)
    {
        tail = newNode;
    }
    
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printing_node(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_at_any_pos(Node *&head, int idx, Node *&tail)
{
    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deleteNode;
}

int main()
{

    int q;
    cin >> q;
    Node *tail = NULL;
    Node *head = NULL;
    int nodeSize = 0;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int v;
        cin >> v;

        if (x == 0)
        {
            insert_at_head(head, v, tail);
            nodeSize++;
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            nodeSize++;
        }

        else if (x == 2)
        {
            if (v < nodeSize)
            {

                delete_at_any_pos(head, v, tail);
                nodeSize--;
            }
        }

        printing_node(head);
        cout << endl;
    }

    return 0;
}