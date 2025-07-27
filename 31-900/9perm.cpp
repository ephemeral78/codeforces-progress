#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int k = abs(arr[0] - 1);
        for (int j = 0; j < n; j++) {
            k = __gcd(k, abs(arr[j] - (j + 1)));
        }
        cout << k << endl;
    }
    return 0;
}