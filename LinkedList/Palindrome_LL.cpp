#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    bool isPalindrome(ListNode* head){
        stack<int> st;
        ListNode* curr=head;

        while(curr){
            st.push(curr->val);
            curr=curr->next;
        }

        curr=head;

        while(curr && curr->val==st.top()){
            st.pop();
            curr=curr->next;
        }

        return curr==NULL;
    }
};

int main(){
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(1);

    Solution s;
    cout<<s.isPalindrome(head);
    return 0;
}