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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;

        queue<TreeNode*> q;
        q.push(root);
        bool flag=true;

        while(!q.empty()){
            int n=q.size();
            vector<int> v(n);
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();

                int idx=flag?i:n-1-i;
                v[idx]=node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            flag=!flag;
            result.push_back(v);
        }
        return result;
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);

    Solution s;
    vector<vector<int>> ans=s.zigzagLevelOrder(root);

    for(auto &lvl:ans){
        for(int x:lvl) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}