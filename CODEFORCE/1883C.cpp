#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int>a(n);
        for(int &x : a) cin >> x;

        int ans = INT_MAX;

        for(int x : a){
            ans = min(ans, (k - x % k) % k);
        }

        if(k == 4){
            int e = 0;
            for(int x : a){
                if(x % 2 == 0) e++;
            }

            if(e >= 2) ans = min(ans,0);
            else if(e == 1) ans = min(ans,1);
            else ans = min(ans,2);
        }

        cout << ans << endl;
    }
}