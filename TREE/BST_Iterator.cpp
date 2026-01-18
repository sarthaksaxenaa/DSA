#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class BSTIterator {
public:
    stack<TreeNode*> st;

    BSTIterator(TreeNode* root){
        pushLeft(root);
    }

    int next(){
        TreeNode* node=st.top();
        st.pop();
        if(node->right) pushLeft(node->right);
        return node->val;
    }

    bool hasNext(){
        return !st.empty();
    }

    void pushLeft(TreeNode* root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
};

int main(){
    TreeNode* root=new TreeNode(7);
    root->left=new TreeNode(3);
    root->right=new TreeNode(15);
    root->right->left=new TreeNode(9);
    root->right->right=new TreeNode(20);

    BSTIterator it(root);

    while(it.hasNext()){
        cout<<it.next()<<" ";
    }
    return 0;
}