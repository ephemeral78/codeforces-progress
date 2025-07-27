#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 0) cout << 0 << endl;
        else if (n == 1) cout << 3 << endl;
        else cout << (63 - __builtin_clzll((unsigned long long)(n - 1))) * 2 + 3 << endl;
    }
    return 0;
}