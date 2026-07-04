#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int danik=0;
    int anton = 0;
    for(char ch: s){
        if(ch == 'A') anton++;
        else danik++;
    }

    if(anton > danik) cout << "Anton";
    else if(danik > anton) cout << "Danik";
    else cout << "Friendship";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}