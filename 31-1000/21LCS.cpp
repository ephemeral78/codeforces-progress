#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin>>a>>b;
        int n = a.length();
        int m = b.length();
        int maxL = 0;
        for (int i = 1; i <= min(n, m); i++)
        {
            for (int j = 0; j + i <= n; j++)
            {
                for (int k = 0; k + i <= m; k++)
                {
                    string a1 = a.substr(j, i);
                    string b1 = b.substr(k, i);
                    if(a1==b1) maxL = max(i, maxL);
                }
            }
        }
        cout<<n+m-2*maxL<<endl;
    }
    return 0;
}