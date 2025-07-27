#include <bits/stdc++.h>
using namespace std;

// bool pref(int x, const vector<long long>& v) {
//     for (int i = 0; i < x; i++)
//     {
//         if(v[i]<v[x]) { 
//             return false;
//         }
//     }
//     return true;
// }

// bool suff(int x, const vector<long long>& v) {
//     int n = v.size();
//     for (int i = x + 1; i < n; i++) {
//         if (v[i] > v[x]) {
//             return false;
//         }
//     }
//     return true;
// }

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long> pref(n);
        pref[0] = 1, pref[n-1] = 1;
        long long pmin = v[0];
        for (int i = 1; i < n; i++)
        {
            if(v[i] < pmin) { 
                pmin = v[i];
                pref[i] = 1;
            } else {
                pref[i] = 0;
            }
        }
        
        vector<long long> suff(n);
        suff[n-1] = 1;
        long long smax = v[n-1];
        for (int i = n - 2; i >= 0; i--) {
            if (v[i] > smax) {
                smax = v[i];
                suff[i] = 1;
            } else {
                suff[i] = 0;
            }
        }
        
        string s = "1";
        for (int i = 1; i < n-1; i++) {
            if(pref[i] == 1 || suff[i] == 1) s += '1';
            else s += '0';
        }
        s += '1';
        cout<<s<<endl;
    }
    return 0;
}