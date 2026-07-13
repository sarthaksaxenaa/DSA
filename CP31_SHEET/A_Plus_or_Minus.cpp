#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    if((a+b) == c){
        cout << "+" << "\n";
    }
    if((a-b) == c){
        cout << "-" << "\n";
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