#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> ans;
    int place = 1;

    while (n > 0) {
        int digit = n % 10;

        if (digit != 0) {
            ans.push_back(digit * place);
        }

        place *= 10;
        n /= 10;
    }

    cout << ans.size() << "\n";
    reverse(ans.begin(), ans.end());
    for (int x : ans) {
        cout << x << " ";
    }

    cout << "\n";
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