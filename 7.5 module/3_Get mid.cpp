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
int sizelist(Node*head){
    int count=0;
    Node*tmp=head;
    while (tmp){
        count++;
        tmp=tmp->next;
    }return count;
}
void getmid(Node* head)
{
    Node* tmp=head;
    int size=sizelist(head);
    int mid=(size+1)/2;
    for (int i = 1; i <mid; i++){
        tmp=tmp->next;
    }
    if(size%2==0){
        cout<<tmp->val<<" ";//even
        cout<< tmp->next->val;
    }
    else
        cout<<tmp->val<<endl;// odd
}
int main() {
    int v;
    Node* head=NULL;
    while (cin>>v && v!=-1 ) {
        insert(head,v);
    }

    getmid(head);
    return 0;
}