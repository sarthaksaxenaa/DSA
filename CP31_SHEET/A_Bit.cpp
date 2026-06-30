#include <bits/stdc++.h>
using namespace std;
#define int long long

int x = 0;

void solve() {
    string s;
    cin >> s;

    if (s.find("++") != string::npos)
        x++;
    else
        x--;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    cout << x;

    return 0;
}