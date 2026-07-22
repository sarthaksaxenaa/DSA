#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a[5];
    for (int i = 1; i <= 4; i++) cin >> a[i];

    string s;
    cin >> s;

    int ans = 0;

    for (char c : s) {
        ans += a[c - '0'];
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}