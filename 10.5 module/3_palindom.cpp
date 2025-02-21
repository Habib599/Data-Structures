#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(list<int>& l) {
    auto front = l.begin();
    auto back = l.rbegin(); // Reverse iterator

    for (int i = 0; i < l.size() / 2; i++) {
        if (*front != *back) {
            return false;
        }
        ++front;
        ++back;
    }
    return true;
}

int main() {
    list<int> l;
    int val;

    while (cin >> val && val != -1) {
        l.push_back(val);
    }

    if (isPalindrome(l)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
