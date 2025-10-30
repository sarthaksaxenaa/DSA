#include <bits/stdc++.h>
using namespace std;

class Solution1903 {
public:
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) return num.substr(0, i + 1);
        }
        return "";
    }
};

int main() {
    Solution1903 obj;
    string num = "4206";
    cout << obj.largestOddNumber(num);
}