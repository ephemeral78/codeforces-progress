#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        map<long long, int> count;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if(count[b[i]]==1) {
                flag = true;
                break;
            }
            count[b[i]]++;
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}