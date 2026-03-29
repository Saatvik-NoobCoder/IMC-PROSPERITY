#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        bool c = true;
        for(int i=0;i<n-1;i++){
            if(a[i]%2 == a[i+1]%2){
                c = false;
            }
        }
        if(c) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}