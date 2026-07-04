#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int faces=0;
    
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s == "Icosahedron") faces = faces + 20;
        if(s == "Cube") faces = faces + 6;
        if(s == "Tetrahedron") faces = faces + 4;
        if(s == "Dodecahedron") faces = faces + 12;
        if(s == "Octahedron") faces = faces + 8;
    }

    cout << faces;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}