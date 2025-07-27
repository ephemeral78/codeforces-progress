#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long total = 0;
        long long count = 0;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                count++;
            }
            else if (count >= k)
            {
                total += (count - k + 2) * (count - k + 1) / 2;
                count = 0;
            }
            else
                count = 0;
        }
        if (count >= k)
            total += (count - k + 2) * (count - k + 1) / 2;
        cout << total << endl;
    }
    return 0;
}