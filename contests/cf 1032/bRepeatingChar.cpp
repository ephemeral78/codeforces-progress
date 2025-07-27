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
        string s;
        cin >> s;
        bool b = false;
        unordered_map<char, int> charCounts;
        charCounts[s[0]]++;
        charCounts[s[n-1]]++;
        for (int i = 1; i < n - 1; i++)
        {
            charCounts[s[i]]++;
            if (charCounts[s[i]] > 1)
            {
                b = true;
            }
        }
        if(b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}