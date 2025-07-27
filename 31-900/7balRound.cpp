#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        long long k;
        cin>>n>>k;
        int arr[n];
        int count = 0;
        int maxC = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        for (int j = 1; j < n; j++)
        {
            if(arr[j]-arr[j-1]<=k) count++;
            else {
                maxC = max(maxC, count);
                count = 0;
            }
        }
        maxC = max(maxC, count);    
        cout<<n-maxC-1<<endl;
    }
    return 0;
}