#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int total= 0;
    for (int i = 1; i <= t; i++) {
        total += (i % 2 == 0) ? -i : i;
    }
    cout << "total = " << total << endl;

    return 0;
}
