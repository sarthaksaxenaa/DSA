#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    if (n % 2) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[i + n / 2]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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