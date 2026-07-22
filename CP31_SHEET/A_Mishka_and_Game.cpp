#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    
    int t;
    cin >> t;
    int mishka = 0;
    int chris = 0;
    while(t--){
        int a,b;
        cin >> a >> b;

        if(a > b) mishka++;
        else if(b > a) chris++;
        else{
            mishka = mishka + 0;
            chris = chris + 0;
        } 
    }
    if(mishka > chris) cout << "Mishka" << "\n";
    else if(chris > mishka) cout << "Chris" << "\n";
    else cout << "Friendship is magic!^^" << "\n";


}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}