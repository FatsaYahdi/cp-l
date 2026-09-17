#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<bool> results;
    
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;

        if (a+b == c || a+c == b || b+c == a) {
            results.push_back(true);
        } else {
            results.push_back(false);
        }
    }

    for (bool result : results) {
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}