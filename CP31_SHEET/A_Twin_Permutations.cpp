#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int>&nums, int n){
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        arr[i] = n + 1 - nums[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin >> nums[i];
        }

        permutation(nums, n);
    }
    return 0;
}