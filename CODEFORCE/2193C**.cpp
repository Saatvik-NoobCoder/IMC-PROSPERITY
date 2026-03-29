#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n+1), b(n+1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++)
            cin >> b[i];
        vector<long long> dp(n+2, 0);
        dp[n] = max(a[n], b[n]);
        for (int i = n-1; i >= 1; i--) {
            dp[i] = max({a[i], b[i], dp[i+1]});
        }
        vector<long long> pref(n+1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i-1] + dp[i];
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l-1] << " ";
        }
        cout << "\n";
    }

    return 0;
}