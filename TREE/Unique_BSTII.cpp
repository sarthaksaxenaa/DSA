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
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return build(1,n);
    }

    vector<TreeNode*> build(int start,int end){
        vector<TreeNode*> trees;

        if(start>end){
            trees.push_back(NULL);
            return trees;
        }

        for(int i=start;i<=end;i++){
            vector<TreeNode*> left=build(start,i-1);
            vector<TreeNode*> right=build(i+1,end);

            for(auto l:left){
                for(auto r:right){
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    trees.push_back(root);
                }
            }
        }
        return trees;
    }
};

void preorder(TreeNode* root){
    if(!root) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int n=3;
    Solution s;
    vector<TreeNode*> ans=s.generateTrees(n);

    for(auto t:ans){
        preorder(t);
        cout<<endl;
    }
    return 0;
}