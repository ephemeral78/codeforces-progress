#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a, b;
        int n;
        cin>>a>>b>>n;
        long long arr[n];
        long long sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
            if(arr[j]<a) sum+=arr[j];
            else sum+=a-1;
        }
        cout<<sum+b<<endl;
    }
    return 0;
}