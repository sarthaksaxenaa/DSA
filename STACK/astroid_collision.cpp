#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& a){
    vector<int> st;
    for(int x:a){
        while(!st.empty() && st.back()>0 && x<0){
            if(st.back() < -x){
                st.pop_back();
                continue;
            }
            if(st.back() == -x){
                st.pop_back();
            }
            x=0;
            break;
        }
        if(x!=0) st.push_back(x);
    }
    return st;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> res=asteroidCollision(a);
    for(int x:res) cout<<x<<" ";
    return 0;
}