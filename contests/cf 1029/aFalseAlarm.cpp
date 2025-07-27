#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin>>n>>x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int a, b;
        bool c = false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==1) {
                a = i+1;
                c = true;
                break;
            }
        }
        for (int i = n-1; i >=0; i--)
        {
            if(arr[i]==1) {
                b = i+1;
                break;
            }
        }
        if(c) {
            if(b-a+1<=x) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
    return 0;
}