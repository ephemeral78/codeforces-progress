#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        cin>>n>>a>>b;
        if(n<=1) cout<<"Yes"<<endl;
        else if(a==n && b==n) cout<<"Yes"<<endl;
        else if((a+b) <= (n-2)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}