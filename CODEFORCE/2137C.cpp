#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%2 == 0LL && b%2 == 1LL){
            cout<<-1<<endl;
        }else if(a%2 == 1LL && b%2 == 1LL){
            cout << (a*b) + 1 <<endl;
        }else if(a%2 == 1LL && b%2 == 0LL){
            ll c = b/2;
            if(c%2 == 0LL){
                cout << (a*c) + (b/c) <<endl;
            }else{
                cout << -1 <<endl;
            }       
        }else{
            ll c = b/2;
            cout << (a*c) + (b/c)<<endl;
        }
    }
}