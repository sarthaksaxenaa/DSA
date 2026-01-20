#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        TreeNode* prev=NULL;
        int cnt=0,maxCnt=0;
        dfs(root,prev,cnt,maxCnt,ans);
        return ans;
    }

    void dfs(TreeNode* root,TreeNode*& prev,int& cnt,int& maxCnt,vector<int>& ans){
        if(!root) return;

        dfs(root->left,prev,cnt,maxCnt,ans);

        if(prev && prev->val==root->val) cnt++;
        else cnt=1;

        if(cnt>maxCnt){
            maxCnt=cnt;
            ans.clear();
            ans.push_back(root->val);
        }else if(cnt==maxCnt){
            ans.push_back(root->val);
        }

        prev=root;

        dfs(root->right,prev,cnt,maxCnt,ans);
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(2);

    Solution s;
    vector<int> ans=s.findMode(root);

    for(int x:ans) cout<<x<<" ";
    return 0;
}