#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    std::set<char> cs;

    for (int i = 0; i < s.length(); i++) {
        cs.insert(s[i]);
    }


    if (cs.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}