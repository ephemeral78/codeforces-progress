#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin>>w>>h;
        long long area = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin>>x;
            long long first, last;
            for (int j = 0; j < x; j++)
            {
                long long temp;
                cin>>temp;
                if(j==0) first = temp;
                else if(j==x-1) last = temp;
            }
            long long base = last - first;
            int height;
            if (i<=1) height = h;
            else height = w;
            area = max(area, base * height);  
        }
        cout<<area<<endl;
    }
    return 0;
}