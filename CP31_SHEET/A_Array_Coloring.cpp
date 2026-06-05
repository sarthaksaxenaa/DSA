#include <bits/stdc++.h>
using namespace std;

void coloring(vector<int> &arr, int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 1){
            count++;
        }
    }

    if(count % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        coloring(arr,n);
    }
    return 0;
}