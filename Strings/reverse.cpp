#include <bits/stdc++.h>
using namespace std;

void reverse(char name[], int cnt){
    int s=0;
    int e=cnt-1;
    while(s<e) swap(name[s++], name[e--]);
}

int length(char name[]){
    int cnt=0;
    for(int i=0; name[i]!='\0'; i++) cnt++;
    return cnt;
}

int main(){
    cout<<"Please enter your name: ";
    char name[10];
    cin>>name;

    int cnt=length(name);

    cout<<"Your name's length is "<<cnt<<endl;

    reverse(name,cnt);

    cout<<"Your reverse name is "<<name<<endl;

    return 0;
}