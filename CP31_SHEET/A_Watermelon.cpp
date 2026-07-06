#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    if(n % 2 != 0){
        cout << "NO";
        return ;
    }
    if(n % 2 == 0){
        if((n/2) % 2 == 0){
            cout << "YES";
            return ;
        }
        else{
            cout << "NO";
            return ;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}