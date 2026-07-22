#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    if (n % 4 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
        evenSum += i;
    }

    for (int i = 1; i <= n - 3; i += 2) {
        cout << i << " ";
        oddSum += i;
    }

    cout << evenSum - oddSum << "\n";
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