#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<bool> vis(26, false);
        bool ok = true;

        vis[s[0] - 'A'] = true;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (vis[s[i] - 'A']) {
                    ok = false;
                    break;
                }
                vis[s[i] - 'A'] = true;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}