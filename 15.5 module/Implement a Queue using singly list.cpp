#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Queue {
private:
    Node* head;
    Node* tail;
    int size;

public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }
        Node* temp = head;
        int frontValue = head->val;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        delete temp;
        size--;
        return frontValue;
    }

    int front() {
        if (isEmpty()) {
            return -1;
        }
        return head->val;
    }
};