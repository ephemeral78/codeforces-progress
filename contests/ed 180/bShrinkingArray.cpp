#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if(n<=2 && abs(v[0]-v[1])>1) cout<<-1<<endl;
        else {
            bool inc = true, dec = true, z = false;
            for (int i = 1; i < n; i++) {
                if (abs(v[i] - v[i-1]) <= 1) {
                    z = true;
                    break;
                }
                if (v[i] > v[i - 1]) dec = false;
                if (v[i] < v[i - 1]) inc = false;
            }
            if(z) cout<<0<<endl;
            else if (inc || dec) cout << -1 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}