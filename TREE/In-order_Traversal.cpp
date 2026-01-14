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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        Helper(root,result);
        return result;
    }

    void Helper(TreeNode* root, vector<int>& result){
        if(root==NULL) return;
        Helper(root->left,result);
        result.push_back(root->val);
        Helper(root->right,result);
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);

    Solution s;
    vector<int> ans=s.inorderTraversal(root);

    for(int x:ans) cout<<x<<" ";
    return 0;
}