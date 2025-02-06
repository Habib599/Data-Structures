#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(NULL) {}
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