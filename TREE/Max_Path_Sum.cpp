#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
    int ans=INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }

    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        int l=max(0,dfs(root->left));
        int r=max(0,dfs(root->right));
        ans=max(ans,root->val+l+r);
        return root->val+max(l,r);
    }
};

int main(){
    TreeNode* root=new TreeNode(-10);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);

    Solution s;
    cout<<s.maxPathSum(root);
    return 0;
}