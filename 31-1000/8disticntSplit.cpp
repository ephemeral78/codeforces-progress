#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_set<char> st;
        vector<long long> pfx(n+1, 0);
        vector<long long> sfx(n+1, 0);
        for (int i = 1; i < n; i++)
        {
            st.insert(s[i-1]);
            pfx[i] = st.size();
        }
        st.clear();
        for (int i = n; i >= 1; i--)
        {
            st.insert(s[i-1]);
            sfx[i] = st.size();
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, pfx[i]+sfx[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}