#include <bits/stdc++.h>
using namespace std;

bool canFormSquare(int l1, int b1, int l2, int b2, int l3, int b3) {
    vector<array<int, 2>> rects = {{l1, b1}, {l2, b2}, {l3, b3}};
    sort(rects.begin(), rects.end());
    do {
        int w1 = rects[0][0], h1 = rects[0][1];
        int w2 = rects[1][0], h2 = rects[1][1];
        int w3 = rects[2][0], h3 = rects[2][1];
        int side = max({h1, h2, h3, w1, w2, w3}); 
        if (w1 == w2 && w2 == w3 && (h1 + h2 + h3) == w1) return true;
        if (h1 == h2 && h2 == h3 && (w1 + w2 + w3) == h1) return true;
        if (h1 == h2 + h3 && w2 == w3 && w1 + w2 == h1) return true;
        if (w1 == w2 + w3 && h2 == h3 && h1 + h2 == w1) return true;

    } while (next_permutation(rects.begin(), rects.end()));

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        cout << (canFormSquare(l1, b1, l2, b2, l3, b3) ? "YES" : "NO") << '\n';
    }

    return 0;
}
