#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = tail = newNode;
    } 
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index"<< endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "Deleted position " << pos << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted head" << endl;
}

int sizelist(Node*head)
{
    int count=0;
    Node*tmp=head;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

int readListAndGetSize(Node*& head, Node*& tail) 
{
    int val, size = 0;
    while (true) 
    {
        cin >> val;
        if (val == -1) break;
        insert(head, tail, val);
        size++;
    }
    return size;
}

void getmid(Node* head)
{
    Node* tmp=head;
    int size=sizelist(head);
    int mid=(size+1)/2;
    for (int i = 1; i <mid; i++)
    {
        tmp=tmp->next;
    }
    if(size%2==0)
    {
        cout<<tmp->val<<" ";
        cout<< tmp->next->val;
    }
    else
        cout<<tmp->val<<endl;
}

void sort(Node *head)
{       
    for (Node* i=head;i->next!=NULL;i=i->next) 
    {
        for (Node* j=i->next;j!=NULL;j=j->next) 
        {
            if (i->val > j->val) 
            {
                swap(i->val,j->val);
            }
        }
    }

}

void max(Node * head)
{
    int max=head->val;
    Node*tmp=head;
    while (tmp!=NULL)
    {
        if(tmp->val>max)
        {
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
    while (tmp!=NULL)
    {
        if(tmp->val<min)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<min;
}

int check_same_list(Node* head1, Node* head2) 
{
    while (head1 != NULL && head2 != NULL) 
    {
        if (head1->val != head2->val) 
        {
            return 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL) 
    {
        return 1;
    }
    return 0;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse(Node* n)
{
    if(n==NULL)
        return;
    reverse(n->next);
    cout<<n->val<<" ";
}

int main()
{
       
    int val;
    Node* head=NULL;
    Node* tail=NULL;

    while (1) 
    {
        cin>>val;
        if (val==-1)
            break;
        insert(head,tail,val);
    }
    sort(head);
    print_linked_list(head);
    return 0;
}