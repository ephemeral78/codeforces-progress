#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long count = 0, curr_min, curr_max, el_min, el_max;
        curr_min = v[0] - x;
        curr_max = v[0] + x;
        for (int i = 1; i < n; i++)
        {
            el_min = v[i] - x;
            el_max = v[i] + x;
            if (curr_max < el_min || curr_min > el_max)
            {
                count++;
                curr_min = el_min;
                curr_max = el_max;
            }
            else
            {
                curr_min = max(curr_min, el_min);
                curr_max = min(curr_max, el_max);
            }
        }
        cout << count << endl;
    }
    return 0;
}