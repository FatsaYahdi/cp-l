#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;

  int n[t];

  for (int i = 0; i < t; i++) {
    cin >> n[i];
  }

  for (int i = 0; i < t; i++) {
    if (n[i] % 3 == 1) {
      cout << 2 << endl;
    } else if (n[i] % 3 == 2) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
        
    }
  }

  return 0;
}
