#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int t; cin >> t; 
    int tram = 0; int maxi=0;
    for(int i=0; i<t; i++){
        int a, b;
        cin >> a >> b;
        tram = tram - a;
        tram = tram + b;

        maxi = max(tram,maxi);
    }
    cout << maxi;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}