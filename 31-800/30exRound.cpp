#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int l = n, c = 0;
        while(n>9) {
            l = n/10;
            c++;
            n = n/10;
        }
        int a = (c*9+l);
        cout<<a<<endl;
    }
    return 0;
}