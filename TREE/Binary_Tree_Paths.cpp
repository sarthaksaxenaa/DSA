// Telling what path we are following 

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        vector<int> path;
        dfs(root,path,result);
        return result;
    }

    void dfs(TreeNode* root, vector<int>& path, vector<string>& result){
        if(root==NULL) return;

        path.push_back(root->val);

        if(!root->left && !root->right){
            string s="";
            for(int i=0;i<path.size();i++){
                s+=to_string(path[i]);
                if(i!=path.size()-1) s+="->";
            }
            result.push_back(s);
        }

        dfs(root->left,path,result);
        dfs(root->right,path,result);

        path.pop_back();
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->right=new TreeNode(5);

    Solution s;
    vector<string> ans=s.binaryTreePaths(root);

    for(auto &x:ans) cout<<x<<endl;
    return 0;
}