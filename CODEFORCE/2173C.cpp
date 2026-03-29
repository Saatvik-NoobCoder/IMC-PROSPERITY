#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)){
        return 0;
    }
    const int primeLimit = 1000000;
    vector<int> primes;
    vector<bool> isPrime(primeLimit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * 1LL * i <= primeLimit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= primeLimit; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i <= primeLimit; ++i)
        if (isPrime[i]){
            primes.push_back(i);
        } 
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        } 
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        vector<int> vals = a;
        int s = (int)vals.size();
        if (s == 0) {
            cout << -1 << endl;
            continue;
        }
        long long maxA = vals.back();
        unordered_set<int> present;
        present.reserve(s * 2);
        present.max_load_factor(0.7f);
        for (int x : vals){
            present.insert(x);
        }
        unordered_set<int> good;
        good.reserve(s * 2);
        good.max_load_factor(0.7f);
        for (int b : vals) {
            long long lb = b;
            if (k / lb != maxA / lb){
                continue;
            }
            long long tA = maxA / lb;
            if (tA > s){
                continue; 
            }
            bool ok = true;
            for (long long m = 1; m <= tA; ++m) {
                long long y = lb * m;
                if (!present.count((int)y)) {
                    ok = false;
                    break;
                }
            }
            if (ok){
                good.insert(b);
            }
        }
        if (good.empty()) {
            cout << -1 << endl;
            continue;
        }
        unordered_map<int,int> gmap;
        gmap.reserve(s * 2);
        gmap.max_load_factor(0.7f);
        bool impossible = false;
        for (int v : vals) {
            long long x = v;
            vector<pair<long long,int>> fac;
            long long tmp = x;
            for (int p : primes) {
                long long lp = p;
                if (lp * lp > tmp) break;
                if (tmp % lp == 0) {
                    int cnt = 0;
                    while (tmp % lp == 0) {
                        tmp /= lp;
                        ++cnt;
                    }
                    fac.push_back({lp, cnt});
                }
            }
            if (tmp > 1) fac.push_back({tmp, 1});
            vector<long long> divisors;
            divisors.reserve(128);
            function<void(int,long long)> gen = [&](int idx, long long cur) {
                if (idx == (int)fac.size()) {
                    divisors.push_back(cur);
                    return;
                }
                long long p = fac[idx].first;
                int c = fac[idx].second;
                long long mul = 1;
                for (int e = 0; e <= c; ++e) {
                    gen(idx + 1, cur * mul);
                    mul *= p;
                }
            };
            gen(0, 1);
            long long best = -1;
            for (long long d : divisors) {
                if (d > k) continue;
                int id = (int)d;
                if (good.count(id)) {
                    if (best == -1 || d < best) best = d;
                }
            }
            if (best == -1) {
                impossible = true;
                break;
            }
            gmap[v] = (int)best;
        }
        if (impossible) {
            cout << -1 << endl;
            continue;
        }
        vector<int> B;
        B.reserve(s);
        for (auto &p : gmap) B.push_back(p.second);
        sort(B.begin(), B.end());
        B.erase(unique(B.begin(), B.end()), B.end());
        cout << (int)B.size() << endl;
        for (int i = 0; i < (int)B.size(); ++i) {
            cout << B[i] << (i + 1 == (int)B.size() ? '\n' : ' ');
        }
    }
    return 0;
}