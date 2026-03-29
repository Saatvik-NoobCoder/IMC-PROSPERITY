#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        long long low = 0, high = 0;

        for (int i = 0; i < n; ++i) {
            long long ai = a[i], bi = b[i];

            long long new_high = max(high - ai, bi - low);
            long long new_low  = min(low  - ai, bi - high);

            low = new_low;
            high = new_high;
        }

        cout << high << endl;
    }

    return 0;
}