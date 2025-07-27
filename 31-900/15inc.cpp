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
        int i = n-1;
        bool b = true;
        int count = 0;
        for (int i = n-1; i>=0; i--) {
            while (arr[i]>=arr[i+1]) {
                arr[i] = ceil(arr[i]/2);
                count++;
            }
            if(arr[i]==0 && i!=0) {
                b = false;
                break;
            }
        }
        if(b) cout<<count<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}