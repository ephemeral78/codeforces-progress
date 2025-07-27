#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (k > 1) {
            cout << "YES" << endl;
        } else {
            int maxVal = *max_element(v.begin(), v.end());
            if (v[j - 1] == maxVal)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}