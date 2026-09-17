#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> unique_chars(s.begin(), s.end());

    if (unique_chars.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}