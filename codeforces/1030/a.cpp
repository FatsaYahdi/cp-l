#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    bool s = false;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "hard" << endl;
            s = true;
            break;
        } else {
            continue;
        }
    }

    if (!s) {
        cout << "easy" << endl;
    }

    return 0;
}
