#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<ll> pref(n+1, 0);
        for(int i = 0; i < n; i++)
            pref[i+1] = pref[i] + a[i];
        ll ans = 0;
        for(int x = 0; x <= k; x++) {
            int lr = 2 * x;
            int rr = k - x;
            if(lr + rr> n)continue;
            int L = lr;
            int R = n - rr;
            ll sum = pref[R] - pref[L];
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}
