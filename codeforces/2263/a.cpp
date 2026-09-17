#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ones = 0;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      ones += x;
    }
    cout << (ones >= n - ones ? "Bessie" : "Elsie") << "\n";
  }
  return 0;
}