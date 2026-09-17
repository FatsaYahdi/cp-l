#include <iostream>
using namespace std;

int main() {
    long n, m, a;
    cin >> n >> m >> a;

    int l = (n+a-1)/a;
    int w = (m+a-1)/a;
    int area = l * w;
    cout << area << endl;

    return 0;
}
