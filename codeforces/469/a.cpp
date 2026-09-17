#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int p;
    cin >> p;

    set<int> a;
    while (p--) {
        int x;
        cin >> x;
        a.insert(x);
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        a.insert(x);
    }

    if (a.size() == t) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}