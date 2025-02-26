#include <bits/stdc++.h>
using namespace std;

bool compareStackAndQueue(stack<int>& st, queue<int>& qu) 
{
    // If the sizes are different, they cannot be the same
    if (st.size() != qu.size()) {
        return false;
    }

    while (!st.empty() && !qu.empty()) {
        // Compare the top element of the stack and the front element of the queue
        if (st.top() != qu.front()) {
            return false;
        }
        st.pop();
        qu.pop();
    }

    // If both are empty, they were the same
    return st.empty() && qu.empty();
}

int main() {
    stack<int> st;
    queue<int> qu;
    
    int n, m, x;
    
    // Reading stack
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }
    
    // Reading queue
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        qu.push(x);
    }
    
    if (compareStackAndQueue(st, qu)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
