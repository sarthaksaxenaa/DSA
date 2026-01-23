#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head,int val){
        while(head && head->val==val)
            head=head->next;

        ListNode* curr=head;
        while(curr && curr->next){
            if(curr->next->val==val)
                curr->next=curr->next->next;
            else
                curr=curr->next;
        }
        return head;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(6);
    head->next->next->next=new ListNode(3);
    head->next->next->next->next=new ListNode(4);
    head->next->next->next->next->next=new ListNode(5);
    head->next->next->next->next->next->next=new ListNode(6);

    int val=6;

    Solution s;
    ListNode* ans=s.removeElements(head,val);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}