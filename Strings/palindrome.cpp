#include <bits/stdc++.h>
using namespace std;

void palindrome(char name[], int len){
    int start = 0;
    int end = len - 1;

    while(start <= end){
        if(name[start++] != name[end--]){
            cout << "NO IT IS NOT A PALINDROME STRING";
            return;
        }
    }

    cout << "YESS IT IS A PALINDROME STRING";
}

int length(char name[]){
    int cnt = 0;
    for(int i = 0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;
}

int main(){
    cout<<"Please enter your name: ";
    char name[10];
    cin>>name;

    int cnt = length(name);

    cout<<"Your name's length is "<<cnt<<endl;

    palindrome(name, cnt);

    cout<<", AS YOUR NAME IS: "<<name<<endl;

    return 0;
}