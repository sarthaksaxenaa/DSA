#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        function<void(int)> dfs = [&](int i){
            if(i==nums.size()){
                ans.push_back(cur);
                return;
            }
            dfs(i+1);
            cur.push_back(nums[i]);
            dfs(i+1);
            cur.pop_back();
        };
        dfs(0);
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    Solution s;
    vector<vector<int>> res=s.subsets(nums);
    for(auto &v:res){
        cout<<"[";
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i+1<v.size()) cout<<",";
        }
        cout<<"] ";
    }
    return 0;
}