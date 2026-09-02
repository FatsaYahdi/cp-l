// Soldier and Bananas
#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;

    for (int i=1; i<=w; i++) {
        sum += i * k;
    }

    int result = sum - n;
    if (result < 0) result = 0;
    cout << result << endl;

    return 0;
}
