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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> track;
        int maxV = 0;
        for (int i = 0; i < n; i++)
        {
            track[arr[i]]++;
            maxV = max(maxV, track[arr[i]]);
        }
        long long operations = 0;
        while (maxV < n)
        {
            operations++;
            if (maxV * 2 <= n)
            {
                operations += maxV;
                maxV *= 2;
            }
            else
            {
                operations += n - maxV; 
                maxV = n;
            }
        }

        cout << operations << endl;
    }
    return 0;
}