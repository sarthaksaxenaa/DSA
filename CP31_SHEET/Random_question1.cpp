#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n =10, k=5,x;
    cin >> x;

    if(x <= k){
        cout << "NUMBER OF CANDLES SOLD: " << x << "\n";
        cout << "NUMBER OF CANDLES AVAILABLE: " << n-x << "\n";
    }
    else if(x <= 0){
        cout << "INVALID INPUT" << "\n";
        cout << "NUMBER OF CANDLES LEFT: "<< n <<"\n";
    }
    else{
         cout << "NUMBER OF CANDLES SOLD: " << x << "\n";
         cout << "NUMBER OF CANDLES AVAILABLE: "<< n <<"\n";
    }
    return 0;
}
