#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string t;
    cin >> t;

    bool lucky = false;

    // string temp = to_string(t);

    for (size_t i = 0; i < t.size(); i++) {
        if ((t[i] == '4' || t[i] == '7') && t.size() >= 2) {
            lucky = true;
        } else {
            lucky = false;
            break;
        }
    }

    if (lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}