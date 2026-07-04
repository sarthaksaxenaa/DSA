#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
        int k;
        int l;
        int m;
        int n;
        int d;
        cin >> k >> l >> m >> n >> d;
        int cnt=0;

        for(int i=1; i<=d;i++){
            if(i%k==0) cnt++;
            else if(i%l==0) cnt++;
            else if(i%m==0) cnt++;
            else if(i%n==0) cnt++;
        }
        cout << cnt;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}