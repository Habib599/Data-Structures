#include <bits/stdc++.h>
using namespace std;

vector<int> concatenateArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> C;
    // First, add all elements of B
    for (int num : B) {
        C.push_back(num);
    }
    // Then, add all elements of A
    for (int num : A) {
        C.push_back(num);
    }
    return C;
}

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