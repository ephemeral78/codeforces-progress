#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
        set<pair<int, int>> king_moves, queen_moves;
        for (int j = 0; j < 4; j++) {
            king_moves.insert({xk + dx[j] * a, yk + dy[j] * b});
            king_moves.insert({xk + dx[j] * b, yk + dy[j] * a});
            queen_moves.insert({xq + dx[j] * a, yq + dy[j] * b});
            queen_moves.insert({xq + dx[j] * b, yq + dy[j] * a});
        }
        int cnt = 0;
        for (auto position : king_moves) {
            if (queen_moves.find(position) != queen_moves.end()) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}