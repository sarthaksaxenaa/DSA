#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string a,b,c;
    cin >> a >> b >> c;
    string d = a+b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    if(d == c) cout << "YES";
    else cout << "NO";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}