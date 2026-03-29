#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long s, k, m;
        cin >> s >> k >> m;
        long long a = (m / k) * k;
        long long b = m - a;
        long long ans = max(0LL, s - b);
        cout << ans << endl;
    }    
}