#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 998244353;

    int n;
    cin >> n;
    vector<ll> a(n);
    ll m = 0;
    for(ll &x : a){
        cin >> x;
        m= max(m, x);
    }
    vector<ll>cnt(m+1);
    for(ll x: a) cnt[x]++;
    vector<ll> F(m+1), G(m+1);
    for(int k=1;k<=m;k++){
        for(int j=k;j<=m;j+=k){
            F[k] += cnt[j];
        }
    }
    for(int d=1;d<=m;d++){
        if(cnt[d]){
            for(int j=d;j<=m;j+=d){
                G[j] += cnt[d];
            }     
        }     
    }
    ll ans = 0;
    for(int k=1;k<=m;k++){
        for(int j=k;j<=m;j+=k){
            ll val = (F[k] * G[j/k]) % MOD;
            ans = (ans + (1LL*j*j % MOD) * val) % MOD;
        }
    }
    cout << ans % MOD << endl;
    return 0;
}