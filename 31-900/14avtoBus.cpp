#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        if(n%2!=0 || n<4) cout<<-1<<endl;
        else {
            if(n%6==2) cout<<(n-8)/6+2<<" ";
            else if(n%6==4) cout<<(n-4)/6+1<<" ";
            if(n%6==0) cout<<n/6<<" ";
            if(n%4!=0) {
                cout<<(n-6)/4+1<<endl;
            }
            else cout<<n/4<<endl;
        }
    }
    return 0;
}