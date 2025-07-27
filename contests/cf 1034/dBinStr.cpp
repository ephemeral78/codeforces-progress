#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int o = 0;
        for (char ch : s) {
            if (ch == '1') o++;
        }
        if (n < 2 * k) cout << "Alice" << endl;
         else {
            if (o > k) {
                cout << "Bob" << endl;
            } else {
                cout << "Alice" << endl;
            }
        }
    }
    return 0;
}