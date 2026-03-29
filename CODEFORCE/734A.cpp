#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int Danik=0;
    int Anton=0;
    for(char c: s){
        if(c=='D'){
            Danik++;
        }else{
            Anton++;
        } 
    }
    if(Danik<Anton){
        cout<<"Anton"<<endl;
    }else if(Danik>Anton){
        cout <<"Danik"<<endl;
    }else{
        cout <<"Friendship"<<endl;
    }
    
}