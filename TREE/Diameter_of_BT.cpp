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
    int ans=0;

    int h(TreeNode* root){
        if(root==NULL) return 0;
        int l=h(root->left);
        int r=h(root->right);
        ans=max(ans,l+r);
        return 1+max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        h(root);
        return ans;
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    Solution s;
    cout<<s.diameterOfBinaryTree(root);
    return 0;
}
