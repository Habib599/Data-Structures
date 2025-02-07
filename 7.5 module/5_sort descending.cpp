#include<bits/stdc++.h>
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
void insert(Node*& head, int v) {
    if (!head) head =new Node(v);
    else {
        Node *tmp=head;
        while (tmp->next){
            tmp=tmp->next;
        }
        tmp->next=new Node(v);
    }
}

void orginal(Node*head){
    Node* tmp=head;
    while(tmp){
        cout<<tmp->val<<" ";
        tmp=tmp-> next;
    }
        
}
int main() {
    int v;
    Node* head=NULL;
    while (cin>>v && v!=-1 ) {
        insert(head,v);
    }

    for (Node* i=head; i ;i=i->next) {
        for (Node* j=i->next; j ;j=j->next) {
            if (i->val<j->val) {
                swap(i->val,j->val);// desecnding
            }
        }
    }
    orginal(head);
    return 0;
}