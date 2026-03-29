#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    using ll = long long;
    int t;
    cin >> t;
    while (t--) {
        ll n,c,k;
        cin >>n>>c>>k;
        vector<ll>a(n);
        for (auto &x : a){
            cin >> x;
        }
        sort(a.begin(), a.end());
        for(int i = 0;i<n;i++){
            if (a[i]<=c){
                ll u = min(k,c-a[i]);
                a[i]+=u;
                k-=u;
                c+=a[i];
            }else{
                break;
            }
        }
        cout << c << endl;
    }
}