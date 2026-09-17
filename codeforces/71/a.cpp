#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string text[n];
    for (int i=0; i < n; i++) {
        cin >> text[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (text[i].length() <= 10) {
            cout << text[i] << endl;
        } else {
            cout << text[i][0] << (text[i].length() - 2)  << text[i][text[i].length() - 1] << endl;
        }
    }
}
