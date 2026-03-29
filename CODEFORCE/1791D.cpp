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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll>r(26, 0),l(26, 0);
        for(char c: s) {
            r[c - 'a']++;
        }
        int dr = 0;
        for(int i = 0; i < 26; i++) {
            if(r[i]) dr++;
        }
        int dl = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            if(l[c] == 0) dl++;
            l[c]++;
            r[c]--;
            if(r[c] == 0) dr--;
            ans = max(ans, dl + dr);
        }
        cout << ans << endl;
    }

    return 0;
}