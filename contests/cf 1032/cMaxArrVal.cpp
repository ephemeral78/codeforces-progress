#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int globalMax = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                globalMax = max(globalMax, a[i][j]);
            }

        vector<int> rowMax(n, 0), colMax(m, 0);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                rowMax[i] = max(rowMax[i], a[i][j]);
                colMax[j] = max(colMax[j], a[i][j]);
            }

        int answer = INT_MAX;
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < m; ++c) {
                int maxVal = 0;
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < m; ++j) {
                        int val = a[i][j];
                        if (i == r || j == c)
                            val--;
                        maxVal = max(maxVal, val);
                    }
                }
                answer = min(answer, maxVal);
            }
        }

        cout << answer << '\n';
    }
    return 0;
}
