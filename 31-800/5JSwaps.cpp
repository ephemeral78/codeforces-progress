#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int temp = arr[0];
        bool b = true;
        for (int j = 1; j < n; j++)
        {
            cin>>arr[j];
            if(arr[j]<arr[0]) b = false;
        }
        if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}