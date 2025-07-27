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
        int total_and = arr[0];
        for (int i = 1; i < n; i++)
        {
            total_and &= arr[i];
        }
        cout<<total_and<<endl;
    }
    return 0;
}