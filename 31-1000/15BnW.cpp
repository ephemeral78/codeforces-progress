#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long> prefix(n+1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i+1] = prefix[i] + (s[i]=='W');
        }
        long long minC = INT_MAX;
        for (int i = 0; i <= n-k; i++)
        {
            long long diff = prefix[i+k] - prefix[i];
            minC = min(diff, minC);
        }
        cout<<minC<<endl;
    }
    return 0;
}