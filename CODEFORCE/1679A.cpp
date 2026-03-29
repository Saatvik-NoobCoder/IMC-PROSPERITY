#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >> n;
        ll maxs = 0LL;
        ll mins = 0LL;
        if( n<4LL || n%2 == 1LL){
            cout << -1 << endl;
            continue;
        }else{
            maxs += n/4;
            if(n%6 == 0LL){
                mins += (n/6);
            }else{
                mins += (n/6) + 1;       
            }
        }
        cout << mins << " " << maxs <<endl;
    }
}