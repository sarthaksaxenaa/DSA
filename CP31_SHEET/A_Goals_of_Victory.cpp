#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &arr, int n){
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += arr[i];
    }
    return 0 - sum ;
} 

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n-1);
        for(int i=0; i<n-1; i++){
            cin >> arr[i];
        }
       cout <<  missing(arr,n) << endl;
    }
    return 0;
}