#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node (int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert(Node *&head,int v){
    if(!head) head=new Node(v);
    else{
        Node *tmp=head;
        while (tmp->next){
            tmp=tmp->next;
        }
        tmp->next=new Node(v);
    }
}

void reverse(Node* head){
    if(!head) return;
    reverse(head->next);
    cout<<head->val<<" ";
}

void orginal(Node*head){
    while(head){
        cout<<head->val<<" ";
        head=head-> next;
    }
        
}
int main()
{
    int val;
    Node* head=NULL;
    while(cin>>val &&val!=-1){
        insert(head,val);
    }
    reverse(head);
    cout<<endl;
    orginal(head);
    return 0;
}