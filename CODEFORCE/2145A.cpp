#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%3 !=0){
            cout << (3 - a%3)<<endl;;
        }else{
            cout << 0<<endl;
        }
    }
}