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
        int n;
        cin >> n;
        vector<pair<ll,int>> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(),a.end());
        vector<ll> pref(n);
        pref[0] = a[0].first;
        for(int i=1;i<n;i++)
            pref[i] = pref[i-1] + a[i].first;
        vector<int> b(n);
        b[n-1] = n-1;
        for(int i=n-2;i>=0;i--){
            if(pref[i] >= a[i+1].first)
                b[i] = b[i+1];
            else
                b[i] = i;
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[a[i].second] = b[i];
        }
        for(int i=0;i<n;i++)
            cout << ans[i] << " ";
        cout << endl;

    }

    return 0;
}