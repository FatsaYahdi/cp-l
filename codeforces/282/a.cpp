#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int x = 0;
    int total = 0;
    cin >> n;

    while (n--) {
        string temp;
        cin >> temp;

        if (temp.find("++") != string::npos) {
            total++;
        } else {
            total--;
        }
    }
    cout << total << endl;

    
    return 0;
}