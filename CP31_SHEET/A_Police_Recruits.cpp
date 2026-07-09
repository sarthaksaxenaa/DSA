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
    int cnt=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + nums[i];
        if(sum < 0){
            cnt++;
            sum = 0;
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