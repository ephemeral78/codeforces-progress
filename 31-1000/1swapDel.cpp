#include <bits/stdc++.h>
using namespace std;

vector<int> count(string s, int n) {
    int o = 0, z = 0;
    for (int i = 0; i < n; i++)
    {   
        if(s[i] == '0') z++;
        else o++;
    }
    return {z, o};
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> res = count(s, n);
        if(res[0]==res[1]) cout<<0<<endl;
        else {
            
        }
    }
    return 0;
}