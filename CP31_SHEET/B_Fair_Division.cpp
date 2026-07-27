#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    int one = 0, two = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;

        if (x == 1)
            one++;
        else
            two++;
    }

    if (sum % 2) {
        cout << "NO\n";
    } else if (one == 0 && two % 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}