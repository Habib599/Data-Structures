#include <bits/stdc++.h>
using namespace std;

void print_h(list<int>& dll) {
    for (auto it = dll.begin(); it != dll.end(); ++it) {
        cout << *it<<" ";
        //if (next(it) != dll.end()) cout << " ";
    }
    cout << endl;
}

void print_t(list<int>& dll) {
    for (auto it = dll.rbegin(); it != dll.rend(); ++it) {
        cout << *it<<" ";
        //if (next(it) != dll.rend()) cout << " ";
    }
    cout << endl;
}

void insert_at_position(list<int>& dll, int index, int value) {
    if (index < 0 || index > dll.size()) { // ইনডেক্স অবৈধ হলে
        cout << "Invalid" << endl;
        return;
    }

    auto it = dll.begin();
    advance(it, index); // ইনডেক্স অনুযায়ী পজিশনে পৌঁছানো
    dll.insert(it, value); // নির্দিষ্ট স্থানে ইনসার্ট

    print_h(dll);
    print_t(dll);
}

int main() {
    list<int> dll;
    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;
        insert_at_position(dll, X, V);
    }

    return 0;
}
