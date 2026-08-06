#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> ans;
    int place = 1;

    while(n){
        int digit = n % 10;
        if(digit){
            ans.push_back(digit * place);
        }
        n /= 10;
        place *= 10;
    }

    cout << ans.size() << "\n";
    for(int x : ans){
        cout << x << " ";
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