#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        int ans = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                int sum = a[i] + a[j];
                // We want to find how many k > j such that:
                // a[i] + a[j] + a[k] > 2 * max(a[i], a[j], a[k])
                for (int k = j+1; k < n; ++k) {
                    int total = a[i] + a[j] + a[k];
                    int maxVal = max({a[i], a[j], a[k]});
                    if (total > 2 * maxVal) ans++;
                }
            }
        }
        if(ans<=0) cout<<0<<endl;
        else cout << ans << '\n';
    }
    return 0;
}
