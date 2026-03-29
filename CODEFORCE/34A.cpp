#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int n;
    cin >>  n;
    vector<ll>a(n);
    for(int i =0;i<n;i++){
        cin >>a[i];
    }
    int mindiff = MOD;
    int x = 1, y = 2;
    for(int i =0;i<n-1;i++) {
        int diff =abs(a[i]-a[i+1]);
        if(diff<mindiff) {
            mindiff=diff;
            x = i+1;
            y = i+2;
        }
    }
    int diff=abs(a[n-1]-a[0]);
    if(diff<mindiff) {
        x = n;
        y = 1;
    }
    cout << x << " " << y << endl;
    return 0;
}