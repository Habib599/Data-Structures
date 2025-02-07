#include<bits/stdc++.h>
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
void max(Node * head)
{
    int max=head->val;
    Node*tmp=head;
    while (tmp){
        if(tmp->val>max){
            max=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<max<<" ";
}

void min(Node * head)
{
    int min=head->val;
    Node*tmp=head;
    while (tmp)
    {
        if(tmp->val<min)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<min;
}
int main()
{
    int v;
    Node* head=NULL;
    while (cin>>v && v!=-1 ) {
        insert(head,v);
    }

    max(head);
    // cout<<endl;
    // min(head);

    return 0;
}