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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)cin >> x;
        
        for(int i=0;i<n;i++) {
            int gtr=0,slr=0;
            for(int j =i+1;j<n;j++) {
                if(a[j]>a[i])gtr++;
                else if(a[j]<a[i])slr++;
            }
            cout << max(gtr, slr) << " ";
        }
        cout << endl;
    }

    

    return 0;
}