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
        for (int i = 0; i < n; i += 2)
        {
            cout << i + 1 << " ";
        }
        if (n % 2 == 0)
        {
            for (int i = n - 1; i > 0; i -= 2)
            {
                cout << i + 1 << " ";
            }
        }
        else
        {
            for (int i = n - 1; i > 0; i -= 2)
            {
                cout << i  << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}