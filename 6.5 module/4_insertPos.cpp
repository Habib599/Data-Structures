#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insertTail(Node*& head, int v) {
    if (!head) head = new Node(v);
    else {
        Node* tmp = head;
        while (tmp->next) tmp = tmp->next;
        tmp->next = new Node(v);
    }
}

void insertPos(Node*& head, int pos, int v)
{
    Node* newnode = new Node(v);
    Node* tmp = head;
    if (pos == 0){
        newnode->next = head;
        head = newnode;
        return;
    }
    for (int i = 1; i < pos; i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print(Node* head)
{
    Node* tmp = head;
    while (tmp){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while (tmp){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    int v;
    Node* head = NULL;
    while (cin >> v && v != -1){
        insertTail(head, v);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int pos, v;
        cin >> pos >> v;
        if (pos > size(head)){
            cout << "Invalid" << endl;
        }
        else{
            insertPos(head, pos, v);
            print(head);
        }
    }

    return 0;
}
