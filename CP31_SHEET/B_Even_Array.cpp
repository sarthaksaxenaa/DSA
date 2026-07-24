#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int evenWrong = 0;
    int oddWrong = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && nums[i] % 2 == 1)
            evenWrong++;
        else if (i % 2 == 1 && nums[i] % 2 == 0)
            oddWrong++;
    }

    if (evenWrong == oddWrong)
        cout << evenWrong << "\n";
    else
        cout << -1 << "\n";
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