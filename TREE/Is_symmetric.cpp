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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return helper(root->left,root->right);
    }

    bool helper(TreeNode* a, TreeNode* b){
        if(a==NULL && b==NULL) return true;
        if(a==NULL || b==NULL) return false;
        if(a->val!=b->val) return false;
        return helper(a->left,b->right) && helper(a->right,b->left);
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(3);

    Solution s;
    cout<<s.isSymmetric(root);
    return 0;
}