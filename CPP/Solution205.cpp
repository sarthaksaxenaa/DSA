#include <bits/stdc++.h>
using namespace std;

class Solution205 {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> m1(256,-1), m2(256,-1);
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[t[i]]) return false;
            m1[s[i]]=i;
            m2[t[i]]=i;
        }
        return true;
    }
};

int main() {
    Solution205 obj;
    string s="egg", t="add";
    cout<<(obj.isIsomorphic(s,t) ? "true" : "false");
}
