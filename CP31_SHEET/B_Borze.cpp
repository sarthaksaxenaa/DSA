#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int i = 0;

    while (i < s.size()) {
        if (s[i] == '.') {
            cout << 0;
            i++;
        }
        else {
            if (s[i + 1] == '.') {
                cout << 1;
            }
            else {
                cout << 2;
            }

            i += 2;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}