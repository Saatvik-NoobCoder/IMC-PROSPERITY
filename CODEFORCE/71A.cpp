#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int count =0;
        for(char c: s){
            count++;
        }
        if(count > 10){
            cout <<s[0]<<(count-2)<<s[s.size()-1]<<endl;
        }
        else{
            cout <<s<<endl;
        }
    }
}