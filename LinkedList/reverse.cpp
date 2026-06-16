#include <bits/stdc++.h>
using namespace std;
#define int long long

class Node{
public:
    int val;
    Node* next = nullptr;
    Node(int data){
        val = data;
        next = nullptr;
    }
};
Node* head = new Node(-1);
Node* curr = head;
Node* insertNode(int x){
    if(head->val == -1){
        Node* node = new Node(x);
        head->next = node;
        Node* temp = head;
        head = head->next;
        curr = head;
        delete temp;
    }
    else{
        Node* node = new Node(x);
        curr->next = node;
        curr = curr->next;
    }
    return head;
}

int32_t main(){
    int x=0;
    while(true){
        // cout  << "Enter the values, -1 to stop: ";
        cin >> x;
        if(x == -1) break;
        head = insertNode(x);
    }
    curr = head;
    while(curr){
        cout << curr->val << " ";
        curr = curr->next;
    }
    curr = head;
}

Node* reverseList(Node* head){
    if(!head || !head->next) return head;
    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}