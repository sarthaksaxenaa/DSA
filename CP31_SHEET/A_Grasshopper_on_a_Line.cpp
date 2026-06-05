#include<bits/stdc++.h>
using namespace std;

void Grasshopper(int x , int k){

    if(x % k != 0){
        cout << 1 << "\n" << x << endl;
        return;
    }

    else{
        cout << 2 << "\n" << 1 << " " << x-1 << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){   
        int x,k; 
           cin >> x >> k;
        
        Grasshopper(x,k);
    }

    return 0;
}