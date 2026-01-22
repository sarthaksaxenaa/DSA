#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head,int n){
        ListNode* fast=head;
        ListNode* slow=head;

        for(int i=0;i<n;i++){
            fast=fast->next;
        }

        if(fast==NULL){
            return head->next;
        }

        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }

        slow->next=slow->next->next;
        return head;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    int n=2;

    Solution s;
    ListNode* ans=s.removeNthFromEnd(head,n);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}