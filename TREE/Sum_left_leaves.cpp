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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int ans=0;

        if(root->left && !root->left->left && !root->left->right)
            ans+=root->left->val;

        ans+=sumOfLeftLeaves(root->left);
        ans+=sumOfLeftLeaves(root->right);

        return ans;
    }
};

int main(){
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);

    Solution s;
    cout<<s.sumOfLeftLeaves(root);
    return 0;
}