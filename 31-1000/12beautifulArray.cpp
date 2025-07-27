#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<long long> ans(n, 0);
        bool bo = false;
        if (s < k * b || s > k * b + (k - 1) * n) {
            cout << -1 << endl;
            continue;
        }
        ans[0] = k * b + min(s - k * b, k - 1);
        s -= ans[0];
        for (long long i = 1; i < n; i++) {
            long long add = min(s, k - 1);
            ans[i] = add;
            s -= add;
        }
        for (long long i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}