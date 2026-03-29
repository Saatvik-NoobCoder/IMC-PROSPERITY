#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if (abs(b-a)+x>=(n-1)) cout<<(n-1)<<endl;
        else cout<<abs(b-a)+x<<endl;
    }
    return 0;
}