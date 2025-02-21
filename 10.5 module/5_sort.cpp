#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1;
    int val;

    while (cin >> val && val != -1) {
        l1.push_back(val);
    }
    l1.sort();
    for (int val : l1)
    {
        cout << val<< " ";
    }
    return 0;
}