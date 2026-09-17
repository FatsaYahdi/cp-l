#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int total_a = 0;
    int total_d = 0;
    string in;

    cin >> in;
    for (int i = 0; i < t; i++) {
        if (in[i] == 'A') {
            total_a++;
        } else {
            total_d++;
        }
    }

    if (total_a > total_d) {
        cout << "Anton" << endl;
    } else if (total_d > total_a) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}