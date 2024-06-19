#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    set<int> v;

    for (int i = 0; i < n; i++) 
    {
        if (v.count(a[i]) > 0) // ai sonkha v te ase ki na
        {
            cout << "YES" << endl;
            return 0;
        }
        v.insert(a[i]);// v=2,1,3,5
    }

    cout << "NO" << endl;
    
    return 0;
}
