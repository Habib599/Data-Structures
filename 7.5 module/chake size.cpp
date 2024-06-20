#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insert(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int readListAndGetSize(Node*& head, Node*& tail) {
    int val, size = 0;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert(head, tail, val);
        size++;
    }
    return size;
}

int main() {
    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    int size1 = readListAndGetSize(head1, tail1);

    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    int size2 = readListAndGetSize(head2, tail2);

    if (size1 == size2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
