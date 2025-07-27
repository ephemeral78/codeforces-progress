#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> m(n);
        vector<vector<int>> arr(n);
        vector<int> minv(n);
        for (int i = 0; i < n; i++) {
            cin >> m[i];
            arr[i].resize(m[i]);
            for (int j = 0; j < m[i]; j++) {
                cin >> arr[i][j];
            }
            int mini = INT_MAX;
            for (int j = 0; j < m[i]; j++) {
                mini = min(mini, arr[i][j]);
            }
            minv[i] = mini;
        }
        
    }
    return 0;
}