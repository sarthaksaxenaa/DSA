#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin >> a >> b;
    vector<int> nums(a);
    int cnt =0;
    for(int i=0; i<a; i++){
        cin >> nums[i];
        if(nums[i] + b <=5) cnt++;
    }
    cout << cnt/3;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}