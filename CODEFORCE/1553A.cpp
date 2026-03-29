#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int ans= n/10;
        if(n%10==9){
            cout << ans+1<<endl;
        }else{
            cout <<ans<<endl;
        }
    }
}