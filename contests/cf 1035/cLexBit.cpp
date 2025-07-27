#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r, k;
        cin >> n >> l >> r >> k;
        long long ans = 1;
        while (ans <= l)
            ans <<= 1;
        if (n % 2 != 0)
            cout << l << endl;
        else
        {
            if (n == 2)
                cout << -1 << endl;
            else if (r < ans)
                cout << -1 << endl;
            else if (k <= n-2)
                cout << l << endl;
            else
                cout << ans << endl;
        }
    }
    return 0;
}