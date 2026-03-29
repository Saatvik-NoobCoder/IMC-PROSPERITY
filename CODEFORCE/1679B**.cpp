#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int n, q;
    cin >> n >> q;
    int sum =0;
    vector <ll> a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    map<int,ll> mp;
    ll base = -1;
    while(q--){
        int t;
        cin >> t;
        if(t==1){
            int i;
            ll x;
            cin >> i >> x;
            ll prev;
            if(mp.count(i)) prev = mp[i];
            else if(base!=-1) prev = base;
            else prev = a[i];
            sum -= prev;
            sum += x;
            mp[i] = x;
        }else{
            ll x;
            cin >> x;
            base = x;
            mp.clear();
            sum = 1LL * n * x;
        }
        cout << sum << endl;
    }
    return 0;
}