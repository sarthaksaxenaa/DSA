#include <bits/stdc++.h>
using namespace std;

class RemoveOuterParentheses {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                if(count > 0) ans += s[i];
                count++;
            } else {
                count--;
                if(count > 0) ans += s[i];
            }
        }
        return ans;
    }
};

int main() {
    RemoveOuterParentheses obj;
    string s;
    cin >> s;
    cout << obj.removeOuterParentheses(s);
}