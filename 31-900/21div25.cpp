#include <bits/stdc++.h>
using namespace std;

int min_removals(string s, char a, char b) {
    int n = s.size();
    int pos_b = -1, pos_a = -1;
    // Find b from the end
    for (int i = n - 1; i >= 0; i--) {
        if (pos_b == -1 && s[i] == b) {
            pos_b = i;
        } else if (pos_b != -1 && s[i] == a) {
            pos_a = i;
            break;
        }
    }
    if (pos_a == -1 || pos_b == -1) return 100; // impossible
    return (n - pos_a - 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = 100;
        ans = min(ans, min_removals(s, '0', '0'));
        ans = min(ans, min_removals(s, '2', '5'));
        ans = min(ans, min_removals(s, '5', '0'));
        ans = min(ans, min_removals(s, '7', '5'));
        if (ans == 100) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}