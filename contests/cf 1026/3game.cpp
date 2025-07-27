#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n), l(n), r(n);
        for (int &x : d) cin >> x;
        for (int i = 0; i < n; ++i) cin >> l[i] >> r[i];

        unordered_map<int, int> from;  // height -> step taken to reach
        from[0] = -1;  // start from height 0

        vector<unordered_map<int, int>> prev(n + 1);  // prev[i][height] = step
        prev[0][0] = -1;

        for (int i = 0; i < n; ++i) {
            unordered_map<int, int> next;
            for (auto &p : from) {
                int h = p.first;
                for (int step = 0; step <= 1; ++step) {
                    if (d[i] != -1 && d[i] != step) continue;
                    int nh = h + step;
                    if (nh >= l[i] && nh <= r[i] && !next.count(nh)) {
                        next[nh] = step;
                    }
                }
            }
            if (next.empty()) {
                from.clear();
                break;
            }
            from = next;
            prev[i + 1] = next;
        }

        if (from.empty()) {
            cout << -1 << '\n';
            continue;
        }

        // Reconstruct
        vector<int> ans(n);
        int h = from.begin()->first;
        for (int i = n; i >= 1; --i) {
            int step = prev[i][h];
            ans[i - 1] = step;
            h -= step;
        }

        for (int x : ans) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}
