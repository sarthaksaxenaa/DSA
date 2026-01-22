#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        ListNode* head=NULL;
        ListNode* tail=NULL;
        int carry=0;

        while(l1 || l2 || carry){
            int sum=carry;

            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }

            carry=sum/10;
            ListNode* node=new ListNode(sum%10);

            if(!head){
                head=tail=node;
            }else{
                tail->next=node;
                tail=node;
            }
        }
        return head;
    }
};

int main(){
    ListNode* l1=new ListNode(2);
    l1->next=new ListNode(4);
    l1->next->next=new ListNode(3);

    ListNode* l2=new ListNode(5);
    l2->next=new ListNode(6);
    l2->next->next=new ListNode(4);

    Solution s;
    ListNode* ans=s.addTwoNumbers(l1,l2);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}