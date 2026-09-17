#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    set<int>s = {a, b, c, d};
    cout << 4 - s.size() << endl;

    return 0;
}
