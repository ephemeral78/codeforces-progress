#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
            cout << 2 << endl;
        else
        {
            // Check if b is NOT of the form 2^k - 1 (i.e., 3, 7, 15, ...)
            if ((a & (a + 1)) != 0)
            {
                if(b<=a && b!=0 && a!=2) cout<<a+2<<endl;
                else cout<<a + 1<<endl;
            }
            else
            {
                cout << a << endl;
            }
        }
    }
    return 0;
}