#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin>>n>>s;
        int ca = 0, cb = 0, m = 0;
        for (int j = 0; j < n; j++)
        {
            if(s[j]=='<') {
                ca++;
                m = max(m, cb);
                cb = 0;
            }
            else if(s[j]=='>') {
                cb++;
                m = max(m, ca);
                ca = 0;
            }
        }
        m = max(m, max(ca, cb));
        cout<<m+1<<endl;
    }
    return 0;
}