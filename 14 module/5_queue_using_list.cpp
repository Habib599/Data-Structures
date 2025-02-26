#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    void push(int val){
        l.push_back(val);
    }
    void print(){
        for (int val : l){
            cout << val << " ";
        }
        cout << endl;
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
int main()
{
    myQueue q,s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    s=q;
    // s.print();
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    // if (!q.empty()) loop ei baire front acsses
    // {
    //     cout << q.front();
    // }
    return 0;
}