#include <bits/stdc++.h>
using namespace std;

class Solution14 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++) {
            string temp = "";
            for(int j = 0; j < min(prefix.size(), strs[i].size()); j++) {
                if(prefix[j] == strs[i][j]) temp += prefix[j];
                else break;
            }
            prefix = temp;
            if(prefix == "") break;
        }
        return prefix;
    }
};

int main() {
    Solution14 obj;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << obj.longestCommonPrefix(strs);
}
// Longest Common Prefix algo 