#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;

        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead=even;

        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }

        odd->next=evenHead;
        return head;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    Solution s;
    ListNode* ans=s.oddEvenList(head);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}