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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }

    TreeNode* build(vector<int>& nums,int l,int r){
        if(l>r) return NULL;

        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(nums[mid]);

        root->left=build(nums,l,mid-1);
        root->right=build(nums,mid+1,r);

        return root;
    }
};

void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    vector<int> nums={-10,-3,0,5,9};

    Solution s;
    TreeNode* root=s.sortedArrayToBST(nums);

    inorder(root);
    return 0;
}