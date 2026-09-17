#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<long long> result(t);

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        long long min_c = 0;
        long long max_c = 0;

        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            long long op1_max = max_c+a;
            long long op1_min = min_c+a;

            long long n_max = max({abs(op1_max), abs(op1_min),op1_max});
            long long n_min = op1_min;

            max_c = n_max;
            min_c = n_min;
            
        }
        
        result[i] = max_c;
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

}