#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;

    void dfs(int i,int t,vector<int>& c){
        if(t==0){
            ans.push_back(cur);
            return;
        }
        if(i==c.size() || t<0) return;
        cur.push_back(c[i]);
        dfs(i,t-c[i],c);
        cur.pop_back();
        dfs(i+1,t,c);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(0,target,candidates);
        return ans;
    }
};

int main(){
    int n,target;
    cin>>n;
    vector<int> candidates(n);
    for(int i=0;i<n;i++) cin>>candidates[i];
    cin>>target;
    Solution s;
    vector<vector<int>> res=s.combinationSum(candidates,target);
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