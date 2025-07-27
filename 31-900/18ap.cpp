#include <bits/stdc++.h>
using namespace std;

int findAP(int a, int b, int c) {
    // Change a
    int new_a = 2 * b - c;
    if (new_a > 0 && new_a % a == 0) return 1;
    // Change b
    int new_b = (a + c);
    if (new_b % 2 == 0 && (new_b / 2) > 0 && (new_b / 2) % b == 0) return 1;
    // Change c
    int new_c = 2 * b - a;
    if (new_c > 0 && new_c % c == 0) return 1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (findAP(a, b, c) ? "YES" : "NO") << endl;
    }
    return 0;
}