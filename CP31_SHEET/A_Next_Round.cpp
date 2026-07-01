#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int score = nums[k - 1];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if (nums[i] >= score && nums[i] > 0)
            cnt++;
    }
    cout << cnt << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}