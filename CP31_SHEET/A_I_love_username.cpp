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

    int lowest = nums[0];
    int highest = nums[0];
    int cnt=0;

    for(int i=0; i<n; i++){
        if(nums[i]< lowest){
            cnt++;
            lowest = nums[i];
        }
        if(nums[i] > highest){
            cnt++;
            highest = nums[i];
        }
    }
    cout << cnt;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}