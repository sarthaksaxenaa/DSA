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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorder(root,v);
        return v;
    }

    void postorder(TreeNode* root, vector<int>& v){
        if(root==NULL) return;
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);

    Solution s;
    vector<int> ans=s.postorderTraversal(root);

    for(int x:ans) cout<<x<<" ";
    return 0;
}