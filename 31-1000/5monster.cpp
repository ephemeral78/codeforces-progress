#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        vector<pair<long long, long long>> arr(n);
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp%k==0) {
                arr[i].first = k;
            }
            else arr[i].first = temp%k;
            arr[i].second = i+1;
        }
        sort(arr.begin(), arr.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
            if (a.first != b.first) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });
        for (auto it: arr) {
            cout << it.second << " ";
        }
        cout<<endl;
    }
    return 0;
}