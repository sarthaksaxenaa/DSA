#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int prod = 1;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    nums[0] = nums[0] + 1;

    for(int i=0; i<n; i++){
        prod = prod * nums[i];
    }
    cout << prod << "\n";
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