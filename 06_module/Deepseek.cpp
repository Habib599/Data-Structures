#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};

void insert_at_tail(Node *&head, int v) {
    
    if (!head) head = new Node(v);

    else{
        Node *tmp=head;
        while (tmp->next){
            tmp=tmp->next;
        }
        tmp->next=new Node(v);
    }
}

void print_linked_list(Node *head) {
    cout << "\nYour Linked List: ";
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n\n";
}

void insert_at_position(Node *head, int pos, int v) {
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at position " << pos << "\n\n";
}

void insert_at_head(Node *&head, int v) {
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head\n\n";
}

void delete_from_position(Node *head, int pos) {
    Node *tmp = head;
    for (int i = 1; i < pos && tmp; i++) tmp = tmp->next;
    if (!tmp || !tmp->next) {
        cout << "Invalid Index\n\n";
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "Deleted position " << pos << "\n\n";
}

void delete_head(Node *&head) {
    if (!head) {
        cout << "Head is not available\n\n";
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted head\n\n";
}

int main() {
    Node *head = NULL;
    while (true) {
        cout << "Option 1: Insert at Tail\n";
        cout << "Option 2: Print Linked List\n";
        cout << "Option 3: Insert at any Position\n";
        cout << "Option 4: Insert at Head\n";
        cout << "Option 5: Delete from Position\n";
        cout << "Option 6: Delete Head\n";
        cout << "Option 7: Terminate\n";
        int op, pos, v;
        cin >> op;

        if (op == 1 || op == 4) {
            cout << "Enter value: ";
            cin >> v;
            if (op == 1) insert_at_tail(head, v);
            else insert_at_head(head, v);
        } else if (op == 2) {
            print_linked_list(head);
        } else if (op == 3) {
            cout << "Enter position and value: ";
            cin >> pos >> v;
            if (pos == 0) insert_at_head(head, v);
            else insert_at_position(head, pos, v);
        } else if (op == 5 || op == 6) {
            if (op == 5) {
                cout << "Enter position: ";
                cin >> pos;
                if (pos == 0) delete_head(head);
                else delete_from_position(head, pos);
            } else delete_head(head);
        } else if (op == 7) {
            break;
        }
    }
    return 0;
}