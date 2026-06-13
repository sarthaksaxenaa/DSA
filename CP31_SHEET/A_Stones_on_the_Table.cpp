#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> nums(s.begin(), s.end());

    int cnt = 0;

    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i - 1]) cnt++;
    }

    cout << cnt;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}