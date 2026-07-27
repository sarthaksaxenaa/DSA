#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int>nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int maxi=nums[0];
    int mini=nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] > maxi){
            maxi = max(maxi,nums[i]);
        }
        if(nums[i] < mini){
            mini = min(mini, nums[i]);
        }
    }
    cout << maxi - mini << "\n";
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