#include <bits/stdc++.h>
using namespace std;

void space(vector<int> nums, int n){
    int cnt=0; int maxi=0;
    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            cnt++;
            maxi = max(cnt,maxi);
        }
        else{
            cnt = 0;
        }
    }
    cout << maxi << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        space(nums, n);
    }
    return 0;
}