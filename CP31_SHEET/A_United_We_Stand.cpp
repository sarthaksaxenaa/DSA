#include <bits/stdc++.h>
using namespace std;

void func(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());

    int mn= arr[0];

    vector<int> b, c;
    for(int x: arr){
        if(mn == x){
            b.push_back(x);
        }
        else {
            c.push_back(x);
        }
    }

    if(c.empty()){
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << endl;

    for(int x: b){
        cout << x << " ";
    }
    cout << endl;

    for(int x: c){
        cout << x << " ";
    }
    cout << endl;


}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        func(arr,n);
    }
    return 0;
}