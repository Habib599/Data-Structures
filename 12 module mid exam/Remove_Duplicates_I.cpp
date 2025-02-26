#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node (int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insertTail(Node*& head, int v){
    Node* newNode = new Node(v);
    if (!head) {
        head = newNode;
    } 
    else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void deleteDublicate(Node*head)
{
    if(!head) return;
    Node* tmp=head;
    while(tmp->next!=NULL){
        if(tmp->val == tmp->next->val){
            Node* deletenode=tmp->next;
            tmp->next=deletenode->next;
        }
        else{
            tmp=tmp->next;
        }
    }
}
void print(Node* head){
    Node* tmp = head;
    while (tmp){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() 
{
    int val;
    Node* head=NULL;

    while (cin >> val && val != -1) 
    {
        insertTail(head,val);
    }
    for(Node*i=head; i->next!=NULL;i=i->next){
        for(Node* j=i->next;j!=NULL;j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
    }
    deleteDublicate(head);
    print(head);
    return 0;
}
