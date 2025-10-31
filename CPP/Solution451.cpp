#include <bits/stdc++.h>
using namespace std;

class Solution451 {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        for(int i=0;i<s.size();i++) freq[s[i]]++;

        vector<pair<int,char>> v;
        for(int i=0;i<256;i++){
            if(freq[i]>0) v.push_back({freq[i],(char)i});
        }

        sort(v.rbegin(),v.rend());
        string ans="";
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++) ans+=v[i].second;
        }
        return ans;
    }
};

int main() {
    Solution451 obj;
    string s="tree";
    cout<<obj.frequencySort(s);
}