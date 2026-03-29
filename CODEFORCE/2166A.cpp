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
        int c = 0;
        for(int i = 0; i<n; i++){
            if(s[n-1] == s[i]){
                c++;
            }
        }
        cout << n-c <<endl; 
    }

    return 0;
}