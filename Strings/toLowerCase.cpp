#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z') return ch;
    else{
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

int main(){
    cout << "Enter the character to be converted to lower case: ";
    char ch; cin >> ch;
    cout << "Character to lower case is: "<< toLowerCase(ch) << endl; 
    return 0;
}