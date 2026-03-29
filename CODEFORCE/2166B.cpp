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
        ll a,b,n;
        cin >> a >>b>>n;
        if(min(b, (a/n)) == b || a==b){
            cout << 1 <<endl;
        }else{
            cout << 2 <<endl;
        }
        
    }

    return 0;
}