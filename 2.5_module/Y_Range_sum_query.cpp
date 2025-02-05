#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<long long> v(n), prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        prefixSum[i + 1] = prefixSum[i] + v[i];
    }

    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l - 1] << endl;
    }

    return 0;
}
