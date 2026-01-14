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
    int h(TreeNode* root){
        if(root==NULL) return 0;
        int l=h(root->left);
        if(l==-1) return -1;
        int r=h(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1) return -1;
        return 1+max(l,r);
    }

    bool isBalanced(TreeNode* root) {
        return h(root)!=-1;
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->left->left=new TreeNode(5);

    Solution s;
    cout<<s.isBalanced(root);
    return 0;
}