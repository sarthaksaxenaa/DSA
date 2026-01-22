#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* n=head->next;
        head->next=swapPairs(n->next);
        n->next=head;
        return n;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);

    Solution s;
    ListNode* ans=s.swapPairs(head);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}