#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    if(n%2==0){
        cout << n/2 << "\n";
        for(int i=0; i<n/2; i++){
            cout << "2 ";
        }
        return ;
    }
    else if(n==3){
        cout << "1" << "\n";
        cout << "3 ";
        return;
    }
    else if(n>4){
        int a = n-3;
        cout << a/2 + 1 << "\n";
        cout << "3 ";
        for(int i=0;i<a/2; i++){
            cout << "2 ";
        }
        return;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}