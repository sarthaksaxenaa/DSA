#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    string s = to_string(n);

    int digit = s[0] - '0';
    int len = s.size();

    cout << (digit - 1) * 10 + (len * (len + 1)) / 2 << "\n";
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