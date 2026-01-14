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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL) return v;
        levelorder(root,v);
        return v;
    }

    void levelorder(TreeNode* root, vector<vector<int>>& v){
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int> level;

            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                level.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            v.push_back(level);
        }
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    Solution s;
    vector<vector<int>> ans=s.levelOrder(root);

    for(auto &lvl:ans){
        for(int x:lvl) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}