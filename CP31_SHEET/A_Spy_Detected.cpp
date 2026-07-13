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
    int common;
    if(nums[0] == nums[1]){
        common = nums[0];
    }
    else if(nums[0] == nums[2]){
        common = nums[2];
    }
    else{
        common = nums[1];
    }

    for(int i=0; i<n; i++){
        if(nums[i] != common){
            cout << i+1 << "\n";
            return;
        }
    }
     
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