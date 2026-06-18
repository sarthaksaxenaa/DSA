#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << '\n';
        return;
    }

    int prev;
    cin >> prev;

    int groups = 1;

    for (int i = 1; i < n; i++) {
        int cur;
        cin >> cur;

        if (cur != prev)
            groups++;

        prev = cur;
    }

    cout << groups << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}