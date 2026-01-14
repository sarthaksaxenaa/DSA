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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preorder(root,v);
        return v;
    }

    void preorder(TreeNode* root, vector<int>& v){
        if(root==NULL) return;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);

    Solution s;
    vector<int> ans=s.preorderTraversal(root);

    for(int x:ans) cout<<x<<" ";
    return 0;
}