#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int x = max(a,b);
    int y = max(c,d);

    vector<int> nums = {a,b,c,d};
    sort(nums.begin(), nums.end());

    if(x==nums[2] && y==nums[3] || x==nums[3] && y==nums[2]){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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