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
        ll n,m,d;
        cin >> n >> m >>d;
        ll nt = d/m + 1;
        cout << (n+nt - 1)/nt << endl;

    }

    return 0;
}