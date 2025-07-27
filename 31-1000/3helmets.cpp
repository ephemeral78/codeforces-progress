#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
            return x.second < y.second;
        });
        int people = n-1;
        long long cost = p;
        for (int i = 0; i < n; i++) {
            if (people == 0) break;
            if (v[i].second >= p) {
                cost += 1LL * people * p;
                break;
            }
            if (v[i].first >= people) {
                cost += 1LL * people * v[i].second;
                people = 0;
            } else {
                cost += 1LL * v[i].first * v[i].second;
                people -= v[i].first;
            }
        }
        cout << cost << endl;
    }
    return 0;
}