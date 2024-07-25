class Stack {
private:
    Node* head;
    int sz;

public:
    Stack() {
        head = nullptr;
        sz = 0;
    }

    int getSize() {
        return sz;
    }

    bool isEmpty() {
        return sz == 0;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop() {
        if (isEmpty()) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        sz--;
    }

    int getTop() {
        if (isEmpty()) {
            return -1; // Return -1 if stack is empty
        }
        return head->data;
    }
};