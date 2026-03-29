#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<int, vector<int>, greater<int>> mp;
        for (int i = 0; i < n; i++) {
            int mod = a[i] % k;
            if (mod == 0) mod = k;
            mp[mod].push_back(i + 1);
        }
        for (auto i : mp) {
            for (int j : i.second) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
}