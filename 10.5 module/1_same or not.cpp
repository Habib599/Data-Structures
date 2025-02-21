#include <bits/stdc++.h>
using namespace std;

bool areEqual(list<int>& l1, list<int>& l2) {
    return l1 == l2; 
}

int main() {
    list<int> l1, l2;
    int val;

    while (cin >> val && val != -1) {
        l1.push_back(val);
    }

    while (cin >> val && val != -1) {
        l2.push_back(val);
    }

    if (areEqual(l1, l2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;        
//         Node* pre;        

//     Node (int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->pre=NULL;
//     }
// };
// void insert_tail(Node*&head, Node*&tail, int val)
// {
//     Node* newnode=new Node(val);
//     if(head==NULL)
//     {
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     newnode->pre=tail;
//     tail=newnode;
// }
// int checklist(Node* head1, Node* head2) 
// {
//     while (head1 != NULL && head2 != NULL) 
//     {
//         if (head1->val != head2->val) 
//         {
//             return 0;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     if (head1 == NULL && head2 == NULL) 
//     {
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     Node* head1=NULL;
//     Node* tail1=NULL;
//     Node* head2=NULL;
//     Node* tail2=NULL;

//     int val;
//     while(cin>>val && val!=-1){
//         insert_tail(head1,tail1,val);
//     }

//     while(cin>>val && val!=-1){
//         insert_tail(head2,tail2,val);
//     }

//     if (checklist(head1, head2)) {
//         cout << "YES" <<endl;
//     } else {
//         cout << "NO" <<endl;
//     }
    
//     return 0;
// }