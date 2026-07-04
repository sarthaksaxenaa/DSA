#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string a,b;
    cin >> a >> b;
    
    for(int i=0; i<a.size();i++){
        a[i] = tolower(a[i]);
    }

    for(int i=0; i<b.size();i++){
        b[i] = tolower(b[i]);
    }

    if(a<b){
        cout << "-1";
    }
    else if(a>b){
        cout << "1";
    }
    else{
        cout <<"0";
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}