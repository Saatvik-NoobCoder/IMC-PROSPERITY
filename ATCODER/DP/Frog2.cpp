#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    ll n,k;
    cin >> n>>k;
    vector <ll> a(n);
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    vector<ll> dp(n,LLONG_MAX);
    dp[0] = 0;
    dp[1] = abs(a[1]-a[0]);
    int mins = INT_MAX;
    for(int i = 2; i<n;i++){
        for(int j = 1;j<=k && j<=i;j++){
            dp[i] = min(dp[i-j]+abs(a[i]- a[i-j]),dp[i]);
        }
    }

    cout << dp[n-1] <<endl;

    return 0;
}