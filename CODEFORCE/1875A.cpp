#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int a,b,n;
        cin >> a>>b>>n;
        vector <int> x(n);
        for(int i=0;i<n;i++) cin >> x[i];
        long long c = b;
        for(int i=0;i<n;i++){
            c += min(a-1,x[i]);
        }
        cout << c <<endl;
    }
}