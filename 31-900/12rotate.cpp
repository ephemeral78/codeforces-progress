#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int min1, min2, min3;
        min1 = min2 = min3 = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            min1 = max(min1, arr[i]-arr[0]);
        }
        for (int i = 0; i < n-1; i++)
        {
            min2 = max(min2, arr[n-1]-arr[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            min3 = max(min3, arr[i]-arr[i+1]);
        }
        if(n==1) cout<<0<<endl;
        else cout<<max(min1, max(min2, min3))<<endl;
    }
    return 0;
}