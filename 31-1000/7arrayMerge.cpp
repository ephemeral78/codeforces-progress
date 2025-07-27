#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; // Fix: read n before using it
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        unordered_map<int, int> fCount;
        int count = 1;
        fCount[a[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                count++;
            }
            else
            {
                fCount[a[i - 1]] = max(fCount[a[i - 1]], count);
                count = 1;
            }
        }
        fCount[a[n - 1]] = max(fCount[a[n - 1]], count);
        unordered_map<int, int> fbCount;
        count = 1;
        fbCount[b[0]] = max(fbCount[b[0]], 1);
        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
            {
                count++;
            }
            else
            {
                fbCount[b[i - 1]] = max(fbCount[b[i - 1]], count);
                count = 1;
            }
        }
        fbCount[b[n - 1]] = max(fbCount[b[n - 1]], count);

        int maxCount = 0;
        for (auto &p : fCount)
        {
            int val = p.first;
            int total = p.second + fbCount[val];
            maxCount = max(maxCount, total);
        }
        for (auto &p : fbCount)
        {
            if (fCount.count(p.first))
                continue;
            maxCount = max(maxCount, p.second);
        }
        cout << maxCount << endl;
    }
    return 0;
}