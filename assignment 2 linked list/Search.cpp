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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool find_by_value(Node *head, int nodeSize, int num, int *p)
{
    Node *tmp = head;
    for (int i = 0; i < nodeSize; i++)
    {
        if (tmp->val == num)
        {
            *p = i;
            return true;
        }

        tmp = tmp->next;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        int nodeSize = 0;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
            nodeSize++;
        }
        int num;
        cin >> num;
        int idx = 0;
        int find = find_by_value(head, nodeSize, num, &idx);

        if (find == 1)
        {
            cout << idx << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}