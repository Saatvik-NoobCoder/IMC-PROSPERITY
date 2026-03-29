#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        vector<ll>pref(n+1,0);
        for(ll i =0;i<n;i++){
            pref[i+1] = pref[i]+a[i];
        }
        ll s = pref[n];
        while(q--){
            ll l,r,k;
            cin >> l>>r>>k;
            if((((s - (pref[r] - pref[l-1]) + (r-l+1)*k)) & 1) == 0){
                cout << "NO" << endl;
            }else{
                cout << "YES" <<endl;
            }
        }
    }
    return 0;
}
