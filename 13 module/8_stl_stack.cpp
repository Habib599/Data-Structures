#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n,x;
    cin >> n;
    while (n--){
        cin >> x;
        st.push(x);
    }

    while (!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}