#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    int cnt=0;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        if((b-a) >=2) cnt++;
    }
    cout << cnt;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}