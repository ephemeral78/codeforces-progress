#include <bits/stdc++.h>
using namespace std;

double distance(long long x1, long long y1, long long x2, long long y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        double dist = distance(px, py, qx, qy);
        long long sum = accumulate(v.begin(), v.end(), 0LL);
        long long maxE = *max_element(v.begin(), v.end());

        if (dist > sum) {
            cout << "No" << endl;
        } else if (n == 1) {
            if (abs(dist - v[0]) < 1e-8) cout << "Yes" << endl;
            else cout << "No" << endl;
        } else {
            if (maxE > sum - maxE + 1e-8 + dist) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}