#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int n = s.size();
        int c = 1, x = 1;
        while(c!=0) {
            if(s[x]=='(') c++;
            else if(s[x]==')') c--;
            x++;
        }
        if(x!=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}