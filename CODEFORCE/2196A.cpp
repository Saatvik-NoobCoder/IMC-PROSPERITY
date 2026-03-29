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
        ll p, q;
        cin >> p >> q;

        if ((3*p - 2*q) % 5 == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }

    return 0;
}