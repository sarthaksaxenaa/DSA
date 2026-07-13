#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    for(int i=1; i<n; i++){
        if((nums[i] - nums[i-1]) > 1){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}