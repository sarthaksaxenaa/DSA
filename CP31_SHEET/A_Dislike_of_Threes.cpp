#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int result;
    int cnt=1;
    int i=1;
    while(cnt <= n){
        if(i%3 != 0 && i%10 != 3){
            result = i;
            cnt++;
        }
        i++;
    }
    cout << result << "\n";
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