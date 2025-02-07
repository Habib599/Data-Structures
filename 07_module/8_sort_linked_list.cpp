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

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (!head) head = tail = newNode;
    else tail = tail->next = newNode;
}

void print_list(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL, *tail = NULL;
    int val;
    while (cin >> val && val != -1)
        insert_tail(head, tail, val);

    // Sort in acending order
    for (Node* i = head; i; i = i->next)
        for (Node* j = i->next; j; j = j->next)
            if (i->val > j->val) 
                swap(i->val, j->val);

    print_list(head);
    return 0;
}