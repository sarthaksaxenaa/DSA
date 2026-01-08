#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c=='(' || c=='{' || c=='[') st.push(c);
            else{
                if(st.empty()) return false;
                char t = st.top();
                st.pop();
                if(c==')' && t!='(') return false;
                if(c=='}' && t!='{') return false;
                if(c==']' && t!='[') return false;
            }
        }
        return st.empty();
    }
};

int main(){
    Solution sol;
    string s;
    cin>>s;
    cout<<sol.isValid(s);
    return 0;
}