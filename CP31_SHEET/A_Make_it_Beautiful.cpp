#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; 
    cin >> n;
    vector<int> nums(n);

    for(auto &x: nums){
        cin >> x;
    }
    sort(nums.begin(), nums.end());
    if(nums[0] == nums[n-1]){
        cout << "NO\n";
        return ;
    }

    cout << "YES\n";
    cout << nums[n-1] << " ";

    for(int i=0; i<n-1; i++){
        cout << nums[i] << " ";
    }
    cout << "\n";
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