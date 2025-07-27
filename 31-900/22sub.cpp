#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int o = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==0) z++;
            else if(arr[i]==1) o++;
        }
        cout<< o * (long long)pow(2, z) <<endl;
    }
    return 0;
}