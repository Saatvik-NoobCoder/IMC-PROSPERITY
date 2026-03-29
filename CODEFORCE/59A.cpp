#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >>s;
    int cap = 0;
    int lower = 0;
    int total =0;
    for(char c: s){
        total++;
    }
    for(char c: s){
        if('A'<=c && c<='Z'){
            cap++;
        }if('a'<=c && c <= 'z'){
            lower++;
        }
    }
    if(total%2==0){
        if(lower >= (total/2)){
            for(int i=0;i<s.size();i++){
                s[i]= tolower(s[i]);
            }
        }else{
            for(int i=0;i<s.size();i++){
                s[i]= toupper(s[i]);
            }
        }
    }else{
        if(cap > (total/2)){
            for(int i=0;i<s.size();i++){
                s[i]= toupper(s[i]);
            }
        }else{
            for(int i=0;i<s.size();i++){
                s[i]= tolower(s[i]);
            }
        }
    }
    cout<< s <<endl;

}