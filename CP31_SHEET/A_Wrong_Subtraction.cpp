#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(int n , int k){
    int temp = n;

    for(int i=0; i<k; i++){
        if(temp % 10 != 0) temp--;
        else temp = temp / 10;
    }

    cout << temp << "\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    solve(a,b);

    return 0;
}