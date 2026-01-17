// We have to do level order traversal but htis time we have to do this thing from botoom so the basic approach is to take out the level order traversal and then just reverse the result and thats it.

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        levelorder(root,result);
        reverse(result.begin(),result.end());
        return result;
    }

    void levelorder(TreeNode* root, vector<vector<int>>& result){
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int> level;

            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                level.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            result.push_back(level);
        }
    }
};

int main(){
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);

    Solution s;
    vector<vector<int>> ans=s.levelOrderBottom(root);

    for(auto &lvl:ans){
        for(int x:lvl) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}