#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool check = false;
    for(int i=0; i<n ;i++){
        if(a[i] == a[i+1]) check = true;
        if(a[i] == a[i+2]) check = true;
        else check = false; 
    }
    if(check == true) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}