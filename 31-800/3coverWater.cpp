#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        char s[n];
        int count = 0;
        int count1 = 0;
        bool b = false;
        for(int j=0; j<n; j++) {
            cin>>s[j];
            if(s[j]=='.') {
                count++;
                if(count==3) b = true;
            }
            else {
                if(count<3) {
                    count1 += count;
                }
                count = 0;
            }
        }
        if(count<3) count1 += count;
        if(b) cout<<2<<endl;
        else cout<<count1<<endl;
    }
    return 0;
}