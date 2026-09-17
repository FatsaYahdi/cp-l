#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;

    string temp = to_string(y);

    set<char> chars;

    for (char c : temp) {
        chars.insert(c);
    }

    for (char c : chars) {
        cout << c;
    }



    return 0;
}
