#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int l[q], r[q], k[q];
        for (int i = 0; i < q; i++) {
            cin >> l[i] >> r[i] >> k[i];
        }
        vector<long long> sum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            sum[i + 1] = sum[i] + arr[i];
        }
        for (int i = 0; i < q; i++) {
            int left = l[i] - 1;
            int right = r[i] - 1;
            long long original_sum = sum[n];
            long long segment_sum = sum[right + 1] - sum[left];
            long long new_sum = original_sum - segment_sum + (right - left + 1) * 1LL * k[i];
            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}