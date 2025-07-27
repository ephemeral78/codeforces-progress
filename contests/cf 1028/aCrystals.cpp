#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n == 1)
            cout << 3 << '\n';
        else {
            int exp = 63 - __builtin_clzll((unsigned long long)n); // ✅ fix here
            cout << (exp * 2 + 3) << '\n';
        }
    }
    return 0;
}
