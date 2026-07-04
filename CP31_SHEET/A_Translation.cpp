#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string a, b;
    cin >> a >> b;
    
    if(a.size() != b.size()){
        cout << "NO";
        return;
    } 

    for(int i=0; i<a.size();i++){
        if(a[i] != b[b.size()-1-i]){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}