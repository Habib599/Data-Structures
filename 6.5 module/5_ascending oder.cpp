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

bool isAscending(Node* head) {
    while (head && head->next) {
        if (head->val > head->next->val) return false;
        head = head->next;
    }
    return true;
}

int main() {
    Node* head = NULL;
    int v;
    while (cin >> v && v != -1) insertTail(head, v);
    
    cout << (isAscending(head) ? "YES" : "NO");
    return 0;
}