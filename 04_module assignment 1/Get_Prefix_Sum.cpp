#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n), pre(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pre[i + 1] = pre[i] + v[i];
    }

    for (int i = n; i >0; i--)    
    {
        cout<<pre[i]<<" ";
    }

    return 0;
}
