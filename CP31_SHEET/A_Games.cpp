#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> teams(n);

    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && teams[i].first == teams[j].second) {
                ans++;
            }
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}