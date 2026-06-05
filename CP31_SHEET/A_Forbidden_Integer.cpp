#include <bits/stdc++.h>
using namespace std;

void forbidden(int a, int b, int c){
    vector<int> result;

    if(c != 1){
        for(int i = 0; i < a; i++){
            result.push_back(1);
        }
    }
    else if(b == 1){
        cout << "NO\n";
        return;
    }
    else if(b == 2){
        if(a % 2){
            cout << "NO\n";
            return;
        }

        for(int i = 0; i < a / 2; i++){
            result.push_back(2);
        }
    }
    else{
        if(a % 2 == 0){
            for(int i = 0; i < a / 2; i++){
                result.push_back(2);
            }
        }
        else{
            result.push_back(3);
            a -= 3;

            while(a > 0){
                result.push_back(2);
                a -= 2;
            }
        }
    }

    cout << "YES\n";
    cout << result.size() << "\n";

    for(int x : result){
        cout << x << " ";
    }

    cout << "\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        forbidden(a, b, c);
    }

    return 0;
}