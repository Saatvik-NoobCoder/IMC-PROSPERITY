#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%11!=0){
            cout <<0<<endl;
        }else{
            string s = to_string(n);
            int digits=0;
            for(char c: s){
                digits++;
            }
            cout << digits/2 <<endl;
        }
    }
}