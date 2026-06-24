#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string text;
    int key;

    getline(cin, text);
    cin >> key;

    if (key < 0) {
        cout << "INVALID INPUT";
        return;
    }

    for (int i = 0; i < text.size(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + key) % 26 + 'A';
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + key) % 26 + 'a';
        }
        else if (text[i] >= '0' && text[i] <= '9') {
            text[i] = (text[i] - '0' + key) % 10 + '0';
        }
    }

    cout << text;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}