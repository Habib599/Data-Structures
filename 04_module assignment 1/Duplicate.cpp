#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_set<int> v;
    bool Duplicate = false;

    for (int i = 0; i < N; ++i) {
        if (v.find(A[i]) != v.end()) {
            Duplicate = true;
            break;
        }
        v.insert(A[i]);
    }

    if (Duplicate) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
