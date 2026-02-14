#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    map<int,int> mp;
    for(int x : a) mp[x]++;

    if(mp.size() == 1){
        cout << "Yes\n";
        return;
    }

    if(mp.size() > 2){
        cout << "No\n";
        return;
    }
    
    auto it = mp.begin();
    int f1 = it->second;
    it++;
    int f2 = it->second;

    if(abs(f1 - f2) <= 1) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    int t; 
    cin >> t;
    while(t--) solve();
}