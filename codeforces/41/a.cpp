#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string t,s;

    cin >> t;
    cin >> s;

    string temp = s;
    reverse(temp.begin(), temp.end());

    if (t==temp) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
