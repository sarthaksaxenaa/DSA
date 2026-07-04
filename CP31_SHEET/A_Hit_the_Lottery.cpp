#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int cnt =0;
    
    while(n>0){
        if(n >= 100){
            n = n-100;
            cnt++;
        }
        else if(n>=20 and n<100){
            n=n-20;
            cnt++;
        }
        else if(n>=10 and n<20){
            n=n-10;
            cnt++;
        }
        else if(n>=5 and n<10){
            n=n-5;
            cnt++;
        }
        else if(n>=1 and n<5){
            n=n-1;
            cnt++;
        }
    }
    cout << cnt;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}