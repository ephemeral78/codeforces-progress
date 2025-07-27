#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d;
    cin >> n >> d;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<long long>());
    int count = 0;
    int left = n;
    for (long long i = 0; i < n; i++)
    {
        if(left<=0) break;
        left -= d/v[i]+1;
        if(left>=0) count++;
    }
    cout<<count<<endl;
    return 0;
}