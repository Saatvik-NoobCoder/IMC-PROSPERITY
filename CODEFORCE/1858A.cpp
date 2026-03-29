#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        ll a,b,c;
        cin >>a >>b >>c;
        if(c%2 == 0){
            if(a>b){
                cout << "First" <<endl;
            }else{
                cout << "Second" << endl;
            }
        }else{
            if(a>=b){
                cout << "First" <<endl;
            }else{
                cout << "Second" << endl;
            }
        }
    }
}