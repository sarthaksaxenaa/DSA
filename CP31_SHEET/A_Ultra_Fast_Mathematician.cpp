#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;

    string ans = "";

    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i]) ans += '0';
        else ans += '1';
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}