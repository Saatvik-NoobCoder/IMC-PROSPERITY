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
        ll n;
        cin >> n;

        ll d = 1;
        for(ll i = 2; i*i <= n; i++) {
            if(n%i == 0) {
                d = i;
                break;
            }
        }
        if(d== 1) {
            cout<<1 << " " <<n-1 << endl;
        } else {
            ll a= n/d;
            cout<<a << " " <<n-a << endl;
        }
    }
    return 0;
}