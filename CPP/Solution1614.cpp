#include<iostream>
using namespace std;
class Solution1614{
public:
    int maxDepth(string s){
        int d=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                d++;
                if(d>ans) ans=d;
            }else if(s[i]==')') d--;
        }
        return ans;
    }
};
int main(){
    Solution1614 obj;
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Maximum Depth: "<<obj.maxDepth(s);
}
