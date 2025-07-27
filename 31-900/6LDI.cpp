#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        int maxLen = 0;
        int i = 1;
        while(true) {
            if(n%i==0) {
                i++;
                maxLen++;
            }
            else break;
        }

        cout << maxLen << endl;
    }
    return 0;
}
