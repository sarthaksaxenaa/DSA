#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k){
    stack<char> s;
    for(char c:num){
        while(!s.empty() && k>0 && s.top()>c){
            s.pop();
            k--;
        }
        s.push(c);
    }
    while(k>0 && !s.empty()){
        s.pop();
        k--;
    }
    string ans="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    int i=0;
    while(i<ans.size() && ans[i]=='0') i++;
    ans=ans.substr(i);
    return ans==""?"0":ans;
}

int main(){
    string num;
    int k;
    cin>>num>>k;
    cout<<removeKdigits(num,k);
    return 0;
}