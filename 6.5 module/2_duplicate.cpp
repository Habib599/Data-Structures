#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) : val(val), next(NULL) {}
};

// Insert a node at the end of the list
void insert(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (!head) head = tail = newNode;
    else tail = tail->next = newNode;
}

// Sort the linked list using bubble sort
void sortList(Node* head) {
    for (Node* i = head; i; i = i->next) {
        for (Node* j = i->next; j; j = j->next) {
            if (i->val > j->val) swap(i->val, j->val);
        }
    }
}

// Check if the linked list has duplicates
bool hasDuplicates(Node* head) {
    while (head && head->next) {
        if (head->val == head->next->val) return true;
        head = head->next;
    }
    return false;
}

// Print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (cin >> val && val != -1) {
        insert(head, tail, val);
    }

    // Sort the list and check for duplicates
    sortList(head);
    cout << (hasDuplicates(head) ? "YES" : "NO") << endl;

    return 0;
}