#include <bits/stdc++.h>
using namespace std;

int length(char name[]){
    int cnt = 0;
    for(int i=0; name[i] != '\0'; i++){
        cnt++;
    }
    return cnt;
}

int main(){
    cout << "Please enter your name: ";
    char name[10];
    cin >> name;
    cout << "Your name's length is " << length(name) << endl;
    return 0;
}