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
void insertTail(Node*& head, int v) {
    if (!head) head = new Node(v);
    else {
        Node* tmp = head;
        while (tmp->next) tmp = tmp->next;
        tmp->next = new Node(v);
    }
}

void getmid(Node *head,int pos)
{
    Node *tmp=head;
    for(int i=1;i<=(pos/2)-1;i++){
        tmp=tmp->next;
    }
    if(pos%2==0){
        cout<<tmp->val<<" ";// even
    }
    cout<<tmp->next->val;// odd
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    int v;
    Node *head = NULL;
    while (cin >> v && v !=-1) 
    {
        insertTail(head,v);
    }
    getmid(head,size(head));
    
    return 0;
}