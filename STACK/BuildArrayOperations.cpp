#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i=0;
        for(int x=1;x<=n && i<target.size();x++){
            ans.push_back("Push");
            if(x==target[i]) i++;
            else ans.push_back("Pop");
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n,m;
    cin>>m;
    vector<int> target(m);
    for(int i=0;i<m;i++) cin>>target[i];
    cin>>n;
    vector<string> res=sol.buildArray(target,n);
    for(string s:res) cout<<s<<" ";
    return 0;
}