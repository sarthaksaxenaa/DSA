// Construct the Binary tree from inorder and postorder traversal.
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
    int idx;
    unordered_map<int,int> mp;

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int l, int r){
        if(l>r) return NULL;
        int val=postorder[idx--];
        TreeNode* root=new TreeNode(val);
        int pos=mp[val];
        root->right=build(inorder,postorder,pos+1,r);
        root->left=build(inorder,postorder,l,pos-1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        idx=postorder.size()-1;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        return build(inorder,postorder,0,inorder.size()-1);
    }
};

void printInorder(TreeNode* root){
    if(!root) return;
    printInorder(root->left);
    cout<<root->val<<" ";
    printInorder(root->right);
}

int main(){
    vector<int> inorder={9,3,15,20,7};
    vector<int> postorder={9,15,7,20,3};

    Solution s;
    TreeNode* root=s.buildTree(inorder,postorder);

    printInorder(root);
    return 0;
}