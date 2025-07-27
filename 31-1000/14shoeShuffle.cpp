#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        unordered_map<long long, int> count;
        bool b = true;
        for (int i = 0; i < n; i++)
        {
            count[v[i]]++;
        }
        for (auto id : count)
        {
            if (id.second == 1)
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            vector<long long> std(n);
            for (int i = 0; i < n; i++)
            {
                std[i] = i+1;
            }
            int r = 0, l = 1;
            while(l<n) {
                if (v[r] == v[l]) {
                    l++;
                } else {
                    rotate(std.begin()+r, std.begin()+r+1, std.begin()+l);
                    r = l;
                }
            }
            rotate(std.begin()+r, std.begin()+r+1, std.begin()+l);
            for (int i = 0; i < n; i++)
            {
                cout<<std[i]<<" ";
            }
            cout<<endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}