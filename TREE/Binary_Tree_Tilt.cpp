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
    int findTilt(TreeNode* root) {
        int tilt=0;
        dfs(root,tilt);
        return tilt;
    }

    int dfs(TreeNode* root, int& tilt){
        if(root==NULL) return 0;

        int left=dfs(root->left,tilt);
        int right=dfs(root->right,tilt);

        tilt+=abs(left-right);

        return left+right+root->val;
    }
};

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);

    Solution s;
    cout<<s.findTilt(root);
    return 0;
}