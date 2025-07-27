#include <bits/stdc++.h>
using namespace std;

vector<int> fib(11), prefix_sum(11);

void precompute_fib() {
    fib[0] = 1;
    fib[1] = 2;
    prefix_sum[0] = fib[0];
    for (int i = 1; i < 11; ++i) {
        if (i >= 2) fib[i] = fib[i - 1] + fib[i - 2];
        prefix_sum[i] = prefix_sum[i - 1] + fib[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_fib();

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int max_side = fib[n - 1];
        int total_height = prefix_sum[n - 1];

        string res;
        while (m--) {
            int w, l, h;
            cin >> w >> l >> h;
            int min_base = min(w, l);

            if (min_base >= max_side && h >= total_height)
                res += '1';
            else
                res += '0';
        }
        cout << res << '\n';
    }

    return 0;
}
