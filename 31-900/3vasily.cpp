#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n, k, x;
        cin>>n>>k>>x;
        long long l = (k+1)*k/2;
        long long m = n*(n+1)/2-(n-k+1)*(n-k)/2;
        if(x<=m && x>=l) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}