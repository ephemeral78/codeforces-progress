#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        s += s;
        bool b = false;
        int count = 0;
        int mCount = 0;
        for (int i = 0; i < 2*n; i++)
        {
            if(!b) {
                if(s[i]==c) {
                    b = true;
                    count++;
                }
            }
            else {
                if(s[i]!='g') {
                    count++;
                }
                else {
                    mCount = max(mCount, count);
                count = 0;
                b = false;
                }
            }
        }
        if(c=='g') cout<<0<<endl;
        else cout<<mCount<<endl;
    }
    return 0;
}