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

    int sum=0;
    int maxi=nums[0];
    for(int i=0; i<n; i++){
        maxi = max(maxi, nums[i]);
    }

    for(int i=0; i<n; i++){
        sum += (maxi - nums[i]);
    }
    cout << sum;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}