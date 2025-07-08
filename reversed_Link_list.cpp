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
    }
    else {
        tail->next = newNode;
        tail = tail->next;
    }
}

void print(Node *head)
{
    if(head == NULL){
        return;
    }
    print(head->next);
    cout << head->val <<"\n";
    return;
}

void reverse_link_list(Node* &head, Node* tmp, Node* &tail)
{
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    reverse_link_list(head,tmp->next,tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
    return;
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

    reverse_link_list(head, head,tail);
    // print(head);

    cout << head->val << " " << head->next->val << "\n";

    cout << tail->val << "\n";

    return 0;
}
