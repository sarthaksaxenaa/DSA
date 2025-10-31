#include <bits/stdc++.h>
using namespace std;

class Solution242 {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int freq[26]={0};
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};

int main() {
    Solution242 obj;
    string s="anagram", t="nagaram";
    cout<<(obj.isAnagram(s,t) ? "true" : "false");
}