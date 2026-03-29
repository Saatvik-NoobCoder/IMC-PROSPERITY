#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout << 2 <<endl;
        }if(n==3){
            cout << 3 <<endl;
        }if(n>=4){
            cout << n%2 <<endl;
        }
    }
}