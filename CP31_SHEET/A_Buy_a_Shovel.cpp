#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin >> a >> b;

    for(int i=1; i<=10; i++){
        int x = i * a;
        if(x % 10 == 0){
            cout << i << "\n";
            return;
        }
        if(x % 10 == b){
            cout << i << "\n";
            return;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}