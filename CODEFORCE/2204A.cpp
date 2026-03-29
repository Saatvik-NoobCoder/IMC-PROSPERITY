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
        string s;
        cin >> s;
        int ans = 1;
        for(int i =0;i<s.size();i++){
            if(s[i]=='L'){
                break;
            }else{
                ans++;
            }
        }
        cout << ans <<endl;
    }

    return 0;
}