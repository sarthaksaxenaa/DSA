#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    vector<char> nums;
    for(char ch: s){
        if(ch >= '0' && ch <= '9'){
            nums.push_back(ch);
        }
    }
    sort(nums.begin(),nums.end());    
    
    for(int i=0; i<nums.size(); i++){
        cout << nums[i];
        if(i != nums.size()-1){
            cout << "+";
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}