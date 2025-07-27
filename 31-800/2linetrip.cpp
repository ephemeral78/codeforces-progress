#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>m>>p;
        int arr[m];
        cin>>arr[0];
        int d = arr[0];
        for(int j=1; j<m; j++) {
            cin>>arr[j];
            if(arr[j]-arr[j-1]>d) {
                d = arr[j]-arr[j-1];
            }
        }
        if(2*(p-arr[m-1])>d && p>arr[m-1]) d = 2*(p-arr[m-1]);
        cout<<d<<endl;
    }
    return 0;
}