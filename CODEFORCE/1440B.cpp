#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >>n >> k;
        vector <int> a(n*k);
        for(int i=0;i<n*k;i++){
            cin >> a[i];
        }
        ll ans =0;
        if(n<=2){
            if(n&1){
            for(int i = n/2 + 1;i<n*k;i+=n){
                ans += a[i-1];
            }
            }else{
                for(int i = n/2;i<n*k;i+=n){
                    ans += a[i-1];
                }
            }
            cout << ans <<endl;
        }else{
            if(n&1){
                for(int i = n/2 + 1;i<n*k;i++){
                    
                }
            }
        }
        
    }
}