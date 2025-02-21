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

int checklist(Node* head1, Node* head2) 
{
    while (head1 && head2) 
    {
        if (head1->val != head2->val) return 0;
    
        head1 = head1->next;
        head2 = head2->next;
    }
    if (!head1 && !head2) {
        return 1;
    }
}
int main()
{
    int v;
    Node* head1=NULL;
    Node* head2=NULL;
    while (cin>>v && v!=-1 ) {
        insert(head1,v);
    }

    while (cin>>v && v!=-1 ) {
        insert(head2,v);
    }

    if (checklist(head1, head2)) {
        cout << "YES" <<endl;
    } else {
        cout << "NO" <<endl;
    }
    
    return 0;
}