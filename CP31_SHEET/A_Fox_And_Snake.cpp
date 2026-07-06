#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    bool right = true;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
        } else {
            if (right) {
                for (int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
                cout << "#";
            } else {
                cout << "#";
                for (int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
            }
            right = !right;
        }
        cout << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}