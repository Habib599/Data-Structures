#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n,x;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        q.push(x);
    }
    cout << q.size() << endl;
    
    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}