#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;

    cin >> a;
    cin >> b;

    
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            cout << 1;
        } else if (a[i] == b[i]) {
            cout << 0;
        }
    }

    return 0;
}