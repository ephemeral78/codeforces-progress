#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a = 0, b = 0;
        while(n%3==0) {
            n /= 3;
            a++;
        }
        while(n%2==0) {
            n /= 2;
            b++;
        }
        if(n!=1) cout<<-1<<endl;
        else if(b>a) cout<<-1<<endl;
        else cout<<2*a-b<<endl;
    }
    return 0;
}