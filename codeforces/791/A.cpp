// Bear and Big Brother

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int s = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        s++;
    }

    cout << s << endl;
    return 0;
    
}