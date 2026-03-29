#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >>s;
    if(s[0]>= 65 && s[0]<=90){
        cout<< s<<endl;
    }else{
        s[0]= toupper(s[0]);
        cout <<s<<endl;
    }

}