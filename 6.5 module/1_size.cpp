#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};

void insertTail(Node *&head, int v) {
    Node *newNode = new Node(v);
    if (!head) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next) tmp = tmp->next;
    tmp->next = newNode;
}

int size(Node *head){
    Node *tmp = head;
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
    Node *head = NULL;
    while (cin >> v && v !=-1) {
        insertTail(head,v);
    }

    cout<<size(head)<<endl;
    return 0;
}