#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        stack<int> st;
        int prev=0;
        for(string s:logs){
            int i=0,id=0,time=0;
            while(s[i]!=':'){ id=id*10+(s[i]-'0'); i++; }
            i++;
            bool start=s[i]=='s';
            while(s[i]!=':') i++;
            i++;
            while(i<s.size()){ time=time*10+(s[i]-'0'); i++; }
            if(start){
                if(!st.empty()) ans[st.top()]+=time-prev;
                st.push(id);
                prev=time;
            }else{
                ans[st.top()]+=time-prev+1;
                st.pop();
                prev=time+1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n,m;
    cin>>n;
    cin>>m;
    vector<string> logs(m);
    for(int i=0;i<m;i++) cin>>logs[i];
    vector<int> res=sol.exclusiveTime(n,logs);
    for(int x:res) cout<<x<<" ";
    return 0;
}