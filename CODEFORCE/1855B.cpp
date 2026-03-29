# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve() {
    ll num; cin >> num;
    int ans = 0;
    for(ll i = 1; i <= num; i++) {
        if(num % i == 0) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
int main() {
	int t;
    cin >> t;
    while(t--) {
        solve();;
    }
    return 0;
}