#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    cin>>s;
    int a, b;
    bool flag = false;
    for (int i = 1; i < t; i++)
    {
        if(s[i-1]>s[i]) {
            a = i;
            b = i+1;
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<endl;
    }
}