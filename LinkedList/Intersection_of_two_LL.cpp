#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* a,ListNode* b){
        ListNode* x=a;
        ListNode* y=b;
        while(x!=y){
            x=x?x->next:b;
            y=y?y->next:a;
        }
        return x;
    }
};

int main(){
    ListNode* common=new ListNode(8);
    common->next=new ListNode(10);

    ListNode* a=new ListNode(3);
    a->next=new ListNode(7);
    a->next->next=common;

    ListNode* b=new ListNode(99);
    b->next=new ListNode(1);
    b->next->next=common;

    Solution s;
    ListNode* ans=s.getIntersectionNode(a,b);

    if(ans) cout<<ans->val;
    else cout<<"No Intersection";

    return 0;
}