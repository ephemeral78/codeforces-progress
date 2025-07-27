#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a) {
    int n = a.size();
    vector<int> d(n); // d[i] = number of distinct elements in prefix [0, i]
    unordered_set<int> seen;
    for (int i = 0; i < n; ++i) {
        seen.insert(a[i]);
        d[i] = seen.size();
    }

    int ans = 0;
    int r = n - 1;

    while (r >= 0) {
        unordered_set<int> curr;
        int l = r;
        while (l >= 0) {
            curr.insert(a[l]);
            if ((int)curr.size() == d[r])
                break;
            --l;
        }
        if (l < 0) break; // no valid segment
        ++ans;
        r = l - 1;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << solve(a) << '\n';
    }
    return 0;
}
