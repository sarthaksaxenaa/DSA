#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node* next;
    Node(int x):val(x),left(NULL),right(NULL),next(NULL){}
};

class Solution {
public:
    Node* connect(Node* root){
        if(root==nullptr || root->left==nullptr) return root;

        root->left->next=root->right;
        if(root->next){
            root->right->next=root->next->left;
        }

        connect(root->left);
        connect(root->right);

        return root;
    }
};

void printLevels(Node* root){
    Node* level=root;
    while(level){
        Node* cur=level;
        while(cur){
            cout<<cur->val<<" ";
            cur=cur->next;
        }
        cout<<endl;
        level=level->left;
    }
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    Solution s;
    s.connect(root);

    printLevels(root);
    return 0;
}