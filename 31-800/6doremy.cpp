#include <bits/stdc++.h>
using namespace std;

int isGood(int n, int arr[]) {
    int a = arr[0], b = INT_MIN;
    int ac = 1, bc = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==a) ac++;
        else if(b==INT_MIN) {
            b = arr[i];
            bc++;
        }
        else if(arr[i]==b) bc++;
        else return 0;
    }
    if(b==INT_MIN) return 1;
    if(abs(ac-bc)>1) return 0;
    else return 1;
}

int main() {
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        if(isGood(n, arr)==0) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}