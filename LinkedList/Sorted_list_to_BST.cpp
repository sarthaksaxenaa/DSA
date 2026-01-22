#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head){
        if(head==NULL) return NULL;
        if(head->next==NULL) return new TreeNode(head->val);

        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;

        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        prev->next=NULL;

        TreeNode* root=new TreeNode(slow->val);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(slow->next);

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
    ListNode* head=new ListNode(-10);
    head->next=new ListNode(-3);
    head->next->next=new ListNode(0);
    head->next->next->next=new ListNode(5);
    head->next->next->next->next=new ListNode(9);

    Solution s;
    TreeNode* root=s.sortedListToBST(head);

    inorder(root);
    return 0;
}