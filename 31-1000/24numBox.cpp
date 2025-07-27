#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>grid[i][j];
            }
        }
        int minE = INT_MAX;
        int sum = 0;
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(grid[i][j]<0) neg++;
                minE = min(minE, abs(grid[i][j]));
                sum += abs(grid[i][j]);
            }
        }
        if(neg%2==0) cout<<sum<<endl;
        else cout<<sum-2*minE<<endl;
    }
    return 0;
}