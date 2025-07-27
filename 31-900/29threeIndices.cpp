#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int min = arr[0];
        int max = INT_MIN;
        int dir = 0;
        bool b = false;
        int i=0, j, k;
        for (int p = 1; p < n; p++)
        {
            if(dir==0) {
            if(arr[p]<min) {
                min = arr[p];
                i = p;
            }
            else {
                max = arr[p];
                dir = 1;
                j = p;
            }
        }
            else {
                if(arr[p]<max) {
                    k = p;
                    b = true;
                    break;
                }
                else if(arr[p]>max) {
                    max = arr[p];
                    j = p;
                }
            }
        }
        if(b) cout<<"YES\n"<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        else cout<<"NO\n";
    }
    return 0;
}