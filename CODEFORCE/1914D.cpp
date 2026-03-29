#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(true);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        vector<pair<ll,int>> A, B, C;
        for(int i = 0; i < n; i++){
            A.push_back({a[i], i});
            B.push_back({b[i], i});
            C.push_back({c[i], i});
        }
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());
        ll ans = 0;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 3; k++) {
                    if (A[i].second != B[j].second && B[j].second != C[k].second && A[i].second != C[k].second) {
                        ans = max(ans,A[i].first+B[j].first+C[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}