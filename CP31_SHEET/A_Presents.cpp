#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        ans[nums[i] - 1] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}