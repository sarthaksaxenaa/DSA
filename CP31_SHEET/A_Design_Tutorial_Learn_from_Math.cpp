#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << 4 << " " << n - 4;
    else
        cout << 9 << " " << n - 9;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}