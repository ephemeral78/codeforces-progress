#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin>>n>>r>>b;
        string s;
        int r1 = r, b1 = b;
        int k = ceil((double)r/(b+1));
        while(n--) {
            if(r1>0 && b1>0) k = ceil((double)r1/(b1+1));
            if(r1>=k) {
                s += string(k, 'R');
                r1 -= k;
                if(b1>0) s += 'B';
                b1--;
            }
            else if(r1!=0) {
                s += string(r1, 'R');
                r1 = 0;
                if(b1>0) s += string(b1, 'B');
                b1 = 0;
            }
            else {
                if(b1>0) s += string(b1, 'B');
                b1 = 0;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}