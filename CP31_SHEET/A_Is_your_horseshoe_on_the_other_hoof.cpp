#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    vector<int>nums(4);
    for(int i=0; i<4; i++){
        cin >> nums[i];
    }
    int cnt =0;
    sort(nums.begin(),nums.end());

    for(int i=0; i<3; i++){
        if(nums[i] == nums[i+1]) cnt++;
    }
    cout << cnt << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}