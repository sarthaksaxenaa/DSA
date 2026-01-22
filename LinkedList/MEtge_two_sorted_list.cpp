#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        ListNode* head=NULL;
        ListNode* tail=NULL;

        if(list1->val<list2->val){
            head=tail=list1;
            list1=list1->next;
        }else{
            head=tail=list2;
            list2=list2->next;
        }

        while(list1 && list2){
            if(list1->val<list2->val){
                tail->next=list1;
                list1=list1->next;
            }else{
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }

        if(list1) tail->next=list1;
        else tail->next=list2;

        return head;
    }
};

int main(){
    ListNode* l1=new ListNode(1);
    l1->next=new ListNode(2);
    l1->next->next=new ListNode(4);

    ListNode* l2=new ListNode(1);
    l2->next=new ListNode(3);
    l2->next->next=new ListNode(4);

    Solution s;
    ListNode* ans=s.mergeTwoLists(l1,l2);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}
