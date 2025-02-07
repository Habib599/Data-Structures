#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // Concatenate B and A
    vector<int> C = B;
    C.insert(C.end(),A.begin(),A.end());

    // Print the result
    for (int num : C) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}