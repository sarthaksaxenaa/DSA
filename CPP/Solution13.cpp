#include<iostream>
#include<unordered_map>
using namespace std;
class Solution13{
public:
    int romanToInt(string s){
        unordered_map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && m[s[i]]<m[s[i+1]]) ans-=m[s[i]];
            else ans+=m[s[i]];
        }
        return ans;
    }
};
int main(){
    Solution13 obj;
    string s;
    cout<<"Enter Roman numeral: ";
    cin>>s;
    cout<<"Integer value: "<<obj.romanToInt(s);
}