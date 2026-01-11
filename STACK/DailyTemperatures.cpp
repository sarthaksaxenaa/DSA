#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        stack<int> stk;
        for(int i=0;i<n;i++){
            while(!stk.empty() && temperatures[i]>temperatures[stk.top()]){
                int idx=stk.top();
                stk.pop();
                ans[idx]=i-idx;
            }
            stk.push(i);
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int> temperatures(n);
    for(int i=0;i<n;i++) cin>>temperatures[i];
    vector<int> res=sol.dailyTemperatures(temperatures);
    for(int x:res) cout<<x<<" ";
    return 0;
}