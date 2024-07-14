#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool isEmpty() {
        return v.empty();
    }
};

bool areStacksEqual(myStack& st, myStack& stt) {
    if (st.size() != stt.size()) {
        return false;
    }

    while (!st.isEmpty() && !stt.isEmpty()) {
        if (st.top() != stt.top()) {
            return false;
        }
        st.pop();
        stt.pop();
    }
    return st.isEmpty() && stt.isEmpty();
}

int main() {
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    myStack stt;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        stt.push(x);
    }

    if (areStacksEqual(st, stt)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
