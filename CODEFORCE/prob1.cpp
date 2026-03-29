#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD =  998244353;

    ll t;
    cin >> t;
    vector <ll> n(t);
    for(ll i=0;i<t;i++){
        cin >> n[i];
    }
    ll maxa = LLONG_MIN;
    for(ll i=0;i<t;i++){
        maxa = max(maxa,n[i]);
    }
    vector <ll> dp(maxa+1);
    dp[0] = 1;      
    if(maxa >= 1) dp[1] = 0;

    for(ll i = 2; i <= maxa; i++){
        dp[i] = ((i-1) * ((dp[i-1] + dp[i-2]) % MOD)) % MOD; // FIXED
    }

    for(ll i = 0; i < t; i++) {   
        ll ans = n[i] % MOD;
        ans = ans * (n[i] - 1) % MOD;
        ll val = (dp[n[i]-1] + (n[i]-2) * dp[n[i]-2] % MOD) % MOD;
        ans = ans * val % MOD;
        cout << ans << endl;
    }
        
    

    return 0;
}