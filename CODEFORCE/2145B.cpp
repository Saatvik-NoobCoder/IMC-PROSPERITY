#include<bits/stdc++.h>
using namespace std;

 
int main() {
    int t;
    cin >>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l1, r1, l2, r2;
        l1 = l2 = 0;
        r1 = r2 = n - 1;
        if(n == k) {
            for(int i = 0; i < n; i++) {
                cout << '-';
            }
            cout << endl;
            continue;
        }
        for(char& x : s) {
            if(x == '0' && (l1 == l2)) {
                l1++;
                l2++;
            }
            else if(x == '0') {
                l1++;
                l2++;
            }
            else if(x == '1' && (r1 == r2)) {
                r1--;
                r2--;
            }
            else if(x == '1'){
                r1--;
                r2--;
            }
            else {
                r2--;
                l2++;
            }
        }
        if(l2 > r2) {
            l2 = -1;
            r2 = INT_MAX;
        }
        string ans(n, '?');

        for(int i =0; i < l1; i++) {
            ans[i] =  '-';
        }

        for(int i = n-1; i > r1; i--) {
            ans[i] = '-';
        }

        for(int i = l1; i < l2; i++) {
            ans[i] =  '?';
        }
        for(int i = r1; i > r2; i--) {
            ans[i] = '?';
        }
        if(r2 != INT_MAX) {
            for(int i = l2 ; i <= r2; i++) {
                ans[i] = '+';
            }
        }
        cout << ans << endl;
    }   
}
    
