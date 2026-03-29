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
        ll n,a,b;
        cin >> n >> a >> b;
        ll ca = n/a - n/lcm(a,b);
        ll cb = n/b - n/lcm(a,b);
        cout << (n*(n+1)/2 - (n-ca)*(n-ca+1)/2) - cb*(cb+1)/2 <<endl;

    }

    return 0;
}