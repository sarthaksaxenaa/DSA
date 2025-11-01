#include <iostream>
using namespace std;

class Solution5 {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int l = i, r = j;
                bool ok = true;
                while (l < r) {
                    if (s[l] != s[r]) {
                        ok = false;
                        break;
                    }
                    l++;
                    r--;
                }
                if (ok && j - i + 1 > ans.size())
                    ans = s.substr(i, j - i + 1);
            }
        }
        return ans;
    }
};

int main() {
    Solution5 obj;
    cout << obj.longestPalindrome("babad") << endl;
    cout << obj.longestPalindrome("cbbd") << endl;
}
