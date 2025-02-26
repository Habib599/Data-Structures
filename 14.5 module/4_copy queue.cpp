#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    // Step 1: Push elements from queue to stack
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Pop elements from stack and push to new queue
    queue<int> qt;
    while (!s.empty()) {
        qt.push(s.top());
        s.pop();
    }

    // Step 3: Print elements of the new queue
    while (!qt.empty()) {
        cout << qt.front() << " ";
        qt.pop();
    }

    return 0;
}
