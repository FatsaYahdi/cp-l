#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int rem = a % b;
    if (rem == 0) {
      cout << 0 << "\n";
    } else {
      cout << b - rem << "\n";
    }
  }
  return 0;
}
