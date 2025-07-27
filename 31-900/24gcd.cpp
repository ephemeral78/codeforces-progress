#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin>>a>>b;
        long long res1, res2;
        if(b>a) swap(a, b);
        if(a==b) {
            res1 = 0;
            res2 = 0;
        }
        else {
            res1 = abs(a-b);
            res2 = min(b%res1, res1-b%res1);
        }
        cout<<res1<<" "<<res2<<endl;
    }
    return 0;
}