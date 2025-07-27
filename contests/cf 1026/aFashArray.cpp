#include <bits/stdc++.h>
using namespace std;

void solve() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> d(n), l(n), r(n);
        for (int i = 0; i < n; i++) cin >> d[i];
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];
        vector<set<int>> dp(n + 1);
        dp[0].insert(0);

        for (int i = 0; i < n; i++) {
            for (int h : dp[i]) {
                for (int step = 0; step <= 1; step++) {
                    if (d[i] != -1 && d[i] != step) continue;
                    int nh = h + step;
                    if (nh >= l[i] && nh <= r[i]) {
                        dp[i + 1].insert(nh);
                    }
                }
            }
        }
        if (dp[n].empty()) {
            cout << -1 << endl;
            continue;
        }
        vector<int> ans(n);
        int h = *dp[n].begin();
        for (int i = n - 1; i >= 0; i--) {
            if (d[i] != -1) {
                ans[i] = d[i];
                h -= d[i];
            } else {
                if (dp[i].count(h)) {
                    ans[i] = 0;
                } else {
                    ans[i] = 1;
                    h -= 1;
                }
            }
        }
        for (int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
