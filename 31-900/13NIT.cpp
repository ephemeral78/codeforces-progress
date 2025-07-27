#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        bool a = false, b = false, c = false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]!=0 && a && b) c = true;
            else if(arr[i]!=0) a = true;
            else if(arr[i]==0 && a) b = true;
        }
        if(n==1 && arr[0]==0) cout<<0<<endl;
        else if(n==1) cout<<1<<endl;
        else if(c) cout<<2<<endl;
        else if(a) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}