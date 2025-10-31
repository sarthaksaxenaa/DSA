#include <bits/stdc++.h>
using namespace std;

class Solution796 {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        s += s;
        return s.find(goal)!=string::npos;
    }
};

int main() {
    Solution796 obj;
    string s="abcde", goal="cdeab";
    cout<<(obj.rotateString(s,goal) ? "true" : "false");
}