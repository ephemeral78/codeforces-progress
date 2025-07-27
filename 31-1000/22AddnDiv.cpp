#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (floor(a / b) == 0)
            cout << 1 << endl;
        else
        {
            long long n = a;
            int init = 0;
            if (b == 1)
                init = INT_MAX;
            else
            {
                while (n != 0)
                {
                    n = floor(n / b);
                    init++;
                }
            }
            int curr = 0;
            n = a;
            int change = 1;
            int count = 1;
            b++;
            while (change != 0)
            {
                change = 0;
                n = a;
                curr = count;
                while (n != 0)
                {
                    n = floor(n / b);
                    curr++;
                }
                if (curr <= init)
                {
                    b++;
                    change = 1;
                    count++;
                    init = curr;
                }
                else
                    break;
            }
            cout << init << endl;

        }
    }
    return 0;
}