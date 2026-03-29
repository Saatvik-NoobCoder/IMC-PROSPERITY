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
        ll a,b;
        cin >> a >> b;
        ll ans = 0;
        while(a>0){
            if(floor(a/(b*b)) >= floor(a/(b+1))){
                a = floor(a/(b+1));
                b++;
                ans+=2;
            }else{
                a = floor(a/b);
                ans++;
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}