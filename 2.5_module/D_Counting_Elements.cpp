#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n; i++){
        cin>>a[i];
    }
    // Use a hash set for quick lookup
    unordered_set<int> elements(a.begin(), a.end());

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (elements.find(a[i] + 1) != elements.end()) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}