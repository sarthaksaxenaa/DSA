#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    void deleteNode(ListNode* node){
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

int main(){
    ListNode* head=new ListNode(4);
    head->next=new ListNode(5);
    head->next->next=new ListNode(1);
    head->next->next->next=new ListNode(9);

    ListNode* node=head->next;

    Solution s;
    s.deleteNode(node);

    ListNode* cur=head;
    while(cur){
        cout<<cur->val<<" ";
        cur=cur->next;
    }
    return 0;
}