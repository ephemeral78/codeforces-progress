#include <bits/stdc++.h>
using namespace std;

long long solveIt(int a, int b, long long x, long long y) {
    if(a==b) return 0;
    else if(a>b) {
        if(a-b==1 && a%2!=0) return y;
        else return -1;
    }
    else {
        if(x<y) return (b-a)*x;
        else if(a%2!=0) return ceil((b-a)/(double)2)*x + floor((b-a)/(double)2)*y;
        else return ceil((b-a)/(double)2)*y + floor((b-a)/(double)2)*x;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        long long x, y;
        cin>>a>>b>>x>>y;
        long long res = solveIt(a, b, x, y);
        cout<<res<<endl;
    }
    return 0;
}