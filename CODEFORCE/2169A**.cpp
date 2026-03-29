#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a;
        cin >> n >> a;
        vector <int> v(n);
        int l = 0, m = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (a > v[i]) ++l;
            if (a < v[i]) ++m;
        }
        if(l>m){
            cout << a-1 <<endl;
        }else{
            cout << a+1 <<endl;
        }
    }
}