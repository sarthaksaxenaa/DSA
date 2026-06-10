#include <bits/stdc++.h>
using namespace std;
#define int long long

void walking_master(int a, int b, int c, int d){
    int k = d - b;

    if(k < 0){
        cout << -1 << endl;
        return;
    }
    if(a + k < c){
        cout << -1 << endl;
        return;
    }
    int ans = k + (a + k - c);
    cout << ans << endl;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        walking_master(a,b,c,d);
    }
    return 0;
}