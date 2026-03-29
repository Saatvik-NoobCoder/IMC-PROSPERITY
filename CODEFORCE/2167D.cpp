#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i= 0;i<n;i++){
            for(int j =2;j<a[i];j++){
                if(gcd(j,a[i])==1){
                    
                }
            }
        }


        
    }
}
