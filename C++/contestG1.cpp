#include <bits/stdc++.h>
using namespace std;

const int m = 10000000;
vector<int> spf(m + 1);
void f1() {
    for (int i = 2; i <= m; i++) {
        if (!spf[i]) {
            for (int j = i; j <= m; j += i) {
                if (!spf[j]) spf[j] = i;
            }
        }
    }
}
int f2(int x) {
    int r = 1;
    while (x > 1) {
        int p = spf[x];
        int count = 0;
        while (x % p == 0) {
            x /= p;
            count++;
        }
        if (count % 2 == 1) r *= p;
    }
    return r;
}
int main() {
    f1();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_set<int> seen;
        int seg = 1;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            int sf = f2(a);
            if (seen.count(sf)) {
                seg++;
                seen.clear();
            }
            seen.insert(sf);
        }
        cout << seg<< "\n";
    }
}