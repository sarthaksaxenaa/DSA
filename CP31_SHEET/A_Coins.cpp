#include <bits/stdc++.h>
using namespace std;

void coins(long long a, long long  b){
    if(b == 1){
        cout << "YES" << endl;
        return;
    }
    else if(a % 2 == 0){
        cout << "YES" << endl;
        return;
    }
    else{
        a = a - b;
        if (a < 0){
            cout << "NO" << endl;
            return ;
        }
        else if(a % 2 == 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO"<< endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long  a,b; 
        cin >> a >> b;

        coins(a,b);
    }
    return 0;
}