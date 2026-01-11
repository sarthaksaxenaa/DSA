#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        for(int i=0;i<prices.size();i++){
            int discount=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    discount=prices[i]-prices[j];
                    break;
                }
            }
            result.push_back(discount);
        }
        return result;
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++) cin>>prices[i];
    vector<int> res=sol.finalPrices(prices);
    for(int x:res) cout<<x<<" ";
    return 0;
}