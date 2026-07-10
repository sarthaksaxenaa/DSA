#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin >> a >> b;
    
    int c = 240 - b;
    int cnt=0;
    int x = 5;

    for(int i=0; i<a; i++){
        if(c >= x){
            c = c - x;
            x = x + 5;
            cnt++;
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