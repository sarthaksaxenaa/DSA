#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin >> a >> b;    

    int c= min(a,b);
    cout << c << " ";
    a = a - c;
    b = b - c;

    if(a>0){
        cout << a/2;
    }
    else if(b>0){
        cout << b/2;
    }
    else{
        cout << 0;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}