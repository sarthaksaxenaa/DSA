#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head,int k){
        if(!head || !head->next) return head;

        int n=1;
        ListNode* tail=head;
        while(tail->next){
            tail=tail->next;
            n++;
        }

        k%=n;
        if(k==0) return head;

        tail->next=head;

        int s=n-k;
        ListNode* cur=head;
        for(int i=1;i<s;i++) cur=cur->next;

        ListNode* newHead=cur->next;
        cur->next=NULL;

        return newHead;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    int k=2;

    Solution s;
    ListNode* ans=s.rotateRight(head,k);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}