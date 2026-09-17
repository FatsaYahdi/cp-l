#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string t;
    cin >> t;

    int total = 1;

    for (size_t i = 1; i < t.size(); i++) {
        if (t[i] == t[i-1]) {
            total++;
            if (total >= 7) {
                break;
            }
        } else {
            total = 1;
        }
    }

    if (total >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
