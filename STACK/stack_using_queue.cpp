#include <bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int> q;
public:
    void push(int x){
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        int x=q.front();
        q.pop();
        return x;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};

int main(){
    MyStack s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}