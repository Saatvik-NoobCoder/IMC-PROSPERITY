#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        vector<int> s = p;
        sort(s.begin(), s.end(), greater<int>());
        if (p == s) {
            for (int x : p) cout << x << " ";
            cout << endl;
            continue; 
        }
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (p[i] != s[i]) {
                l = i;
                break;
            }
        }
        for (int i = l + 1; i < n; i++) {
            if (p[i] == s[l]) {
                r = i;
                break;
            }
        }
        reverse(p.begin() + l, p.begin() + r + 1);
        for (int x : p){
            cout << x << " ";
        }
        cout << endl;
    }
}