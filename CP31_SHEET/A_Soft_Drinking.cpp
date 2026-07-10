#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;

    cout << min({drink, lime, salt}) / n;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}