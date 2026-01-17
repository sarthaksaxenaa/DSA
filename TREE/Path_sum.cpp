// is this question we have to tell the path which we are following to achive the target sum that complete path

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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(root,targetSum,path,result);
        return result;
    }

    void dfs(TreeNode* root, int targetSum, vector<int>& path, vector<vector<int>>& result){
        if(root==NULL) return;

        path.push_back(root->val);

        if(root->left==NULL && root->right==NULL && targetSum==root->val)
            result.push_back(path);

        dfs(root->left,targetSum-root->val,path,result);
        dfs(root->right,targetSum-root->val,path,result);

        path.pop_back();
    }
};

int main(){
    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(4);
    root->right=new TreeNode(8);
    root->left->left=new TreeNode(11);
    root->left->left->left=new TreeNode(7);
    root->left->left->right=new TreeNode(2);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(4);
    root->right->right->left=new TreeNode(5);
    root->right->right->right=new TreeNode(1);

    Solution s;
    vector<vector<int>> ans=s.pathSum(root,22);

    for(auto &v:ans){
        for(int x:v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}