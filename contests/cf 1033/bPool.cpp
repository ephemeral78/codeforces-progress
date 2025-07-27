#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        int count = 0;

        for (int i = 0; i < n; i++) {
            int dx, dy, xi, yi;
            cin >> dx >> dy >> xi >> yi;

            int tx = (dx == 1 ? s - xi : xi);
            int ty = (dy == 1 ? s - yi : yi);

            long long T = lcm(tx, ty);

            if ((xi + dx * T) % s == 0 && (yi + dy * T) % s == 0) {
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
