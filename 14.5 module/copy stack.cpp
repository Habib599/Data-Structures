#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int>stt;
    while (!st.empty())
    {
        stt.push(st.top());
        st.pop();
    }
    while (!stt.empty())
    {
        cout << stt.top() << " ";
        stt.pop();
    }
    return 0;
}