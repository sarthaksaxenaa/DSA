#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n != 5) {
        cout << "NO\n";
        return;
    }

    sort(s.begin(), s.end());

    if (s == "Timru")
        cout << "YES\n";
    else
        cout << "NO\n";
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