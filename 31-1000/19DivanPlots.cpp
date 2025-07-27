#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<pair<long long, int>> map;
        for (int i = 0; i < n; i++)
        {
            map.push_back({arr[i], i});
        }
        sort(map.rbegin(), map.rend());
        vector<pair<int, int>> fmap(n, {0, 0});
        long long sum = 0;
        for (int i = 0; i < n; i+=2)
        {
            sum += (i+2)*map[i].first;
            fmap[map[i].second].second = (i+2)/2;
        }
        for (int i = 1; i < n; i+=2)
        {
            sum += (i+1)*map[i].first;
            fmap[map[i].second].second = -(i+1)/2;
        }
        cout<<sum<<endl;
        cout<<0<<" ";
        for (auto it: fmap)
        {
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}