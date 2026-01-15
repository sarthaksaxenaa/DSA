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
    void flatten(TreeNode* root) {
        if(root==nullptr) return;

        flatten(root->left);
        flatten(root->right);

        TreeNode* temp=root->right;
        root->right=root->left;
        root->left=nullptr;

        TreeNode* curr=root;
        while(curr->right!=nullptr){
            curr=curr->right;
        }
        curr->right=temp;
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(5);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->right=new TreeNode(6);

    Solution s;
    s.flatten(root);

    TreeNode* curr=root;
    while(curr){
        cout<<curr->val<<" ";
        curr=curr->right;
    }
    return 0;
}