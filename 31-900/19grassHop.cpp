#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        int c = n % 4;
        if (x % 2 == 0) {
            if (c == 0) cout << x << endl;
            else if (c == 1) cout << x - n << endl;
            else if (c == 2) cout << x + 1 << endl;
            else cout << x + n + 1 << endl;
        } else {
            if (c == 0) cout << x << endl;
            else if (c == 1) cout << x + n << endl;
            else if (c == 2) cout << x - 1 << endl;
            else cout << x - n - 1 << endl;
        }
    }
    return 0;
}