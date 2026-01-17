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
    TreeNode* first=NULL;
    TreeNode* second=NULL;
    TreeNode* prev=NULL;

    void recoverTree(TreeNode* root){
        inorder(root);
        swap(first->val,second->val);
    }

    void inorder(TreeNode* root){
        if(root==NULL) return;

        inorder(root->left);

        if(prev && prev->val>root->val){
            if(first==NULL) first=prev;
            second=root;
        }
        prev=root;

        inorder(root->right);
    }
};

void inorderPrint(TreeNode* root){
    if(!root) return;
    inorderPrint(root->left);
    cout<<root->val<<" ";
    inorderPrint(root->right);
}

int main(){
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(1);
    root->right=new TreeNode(4);
    root->right->left=new TreeNode(2);

    inorderPrint(root);
    cout<<endl;

    Solution s;
    s.recoverTree(root);

    inorderPrint(root);
    return 0;
}