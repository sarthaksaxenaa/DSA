// Construct the Binary Tree from Inorder and preorder traversal question 
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
    int idx=0;

    TreeNode* build(vector<int>& pre, vector<int>& in, int l, int r){
        if(l>r) return NULL;

        TreeNode* root=new TreeNode(pre[idx++]);

        int pos=l;
        while(in[pos]!=root->val) pos++;

        root->left=build(pre,in,l,pos-1);
        root->right=build(pre,in,pos+1,r);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        idx=0;
        return build(preorder,inorder,0,inorder.size()-1);
    }
};

void printInorder(TreeNode* root){
    if(!root) return;
    printInorder(root->left);
    cout<<root->val<<" ";
    printInorder(root->right);
}

int main(){
    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};

    Solution s;
    TreeNode* root=s.buildTree(preorder,inorder);

    printInorder(root);
    return 0;
}