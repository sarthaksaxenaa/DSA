#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> one, two, three;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;

        if(x==1) one.push_back(i+1);
        else if(x==2) two.push_back(i+1);
        else three.push_back(i+1);
    }

    int teams = min({one.size(), two.size(), three.size()});

    cout << teams << "\n";

    for(int i=0;i<teams;i++){
        cout << one[i] << " " << two[i] << " " << three[i] << "\n";
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}