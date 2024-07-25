#include <bits/stdc++.h> 

queue<int> reverseElements(queue<int> q, int k) {
    if (q.empty() || k <= 0 || k > q.size()) {
        return q;
    }

    stack<int> s;

    // Step 1: Push the first K elements into the stack
    for (int i = 0; i < k; ++i) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the stack elements to the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the remaining elements to the back of the queue
    int remainingSize = q.size() - k;
    for (int i = 0; i < remainingSize; ++i) {
        q.push(q.front());
        q.pop();
    }

    return q;
}
