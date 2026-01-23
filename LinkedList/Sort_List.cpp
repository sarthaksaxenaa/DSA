#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* sortList(ListNode* head){
        if(!head) return NULL;

        ListNode* temp=head;
        vector<int> v;

        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        sort(v.begin(),v.end());

        temp=head;
        int i=0;
        while(temp){
            temp->val=v[i++];
            temp=temp->next;
        }

        return head;
    }
};

int main(){
    ListNode* head=new ListNode(4);
    head->next=new ListNode(2);
    head->next->next=new ListNode(1);
    head->next->next->next=new ListNode(3);

    Solution s;
    ListNode* ans=s.sortList(head);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;
}