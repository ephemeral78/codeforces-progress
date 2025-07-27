#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin>>n>>s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(s>=arr[0] && s<=arr[n-1]) {
            cout<<min(abs(s-arr[0]), abs(s-arr[n-1]))+arr[n-1]-arr[0]<<endl;
        }
        else cout<<max(abs(s-arr[n-1]), abs(s-arr[0]))<<endl;
    }
    return 0;
}