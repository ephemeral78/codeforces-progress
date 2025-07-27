#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>m>>p;
        int arr[m];
        bool b = true;
        for(int j=0; j<m; j++) {
            cin>>arr[j];
            if(j!=0) {
                if(arr[j]<arr[j-1]) {
                    b = false;
                }
            }
        }
        if(p<2) {
            if(b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}