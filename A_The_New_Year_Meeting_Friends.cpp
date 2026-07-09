#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.end());

    cout << a[2] - a[0];
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}