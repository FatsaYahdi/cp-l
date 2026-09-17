#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int total = 0;
    
    while (t--) {
        int p, q;
        cin >> p >> q;

        if (q-p > 0 && q-p >= 2) {
            total++;
        }
    }

    cout << total << endl;

    return 0;
}