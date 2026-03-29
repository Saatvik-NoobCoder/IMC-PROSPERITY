#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a = "I hate that ";
    string b = "I love that ";
    string c = "I hate it";
    string d = "I love it";
    string ans;
    for(int i = 1;i <= n ;i++){
        if(i%2 == 1 && i!=n){
            ans += a;
        }
        if(i%2==0 && i!=n){
            ans += b;
        }
        if(i%2 == 1 && i==n){
            ans += c;
        }
        if(i%2==0 && i==n){
            ans += d;
        }
    }
    cout << ans <<endl;
}