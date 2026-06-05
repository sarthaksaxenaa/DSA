#include <bits/stdc++.h>
using namespace std;

void desorting(vector<int> &arr, int n){

    int diff = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            cout << 0 << endl;
            return;
        }

        diff = min(diff, arr[i] - arr[i-1]);
    }

    cout << diff/2 + 1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        desorting(arr,n);
    }
    return 0;
}