#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<bool> awake(n, false);

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                int endPos = min(n - 1, i + k);
                for (int j = i; j <= endPos; ++j) {
                    awake[j] = true;
                }
            }
        }

        int forcedAwake = 0;
        for (int i = 0; i < n; ++i) {
            if (awake[i]) forcedAwake++;
        }

        cout << (n - forcedAwake) << "\n";
    }

    return 0;
}