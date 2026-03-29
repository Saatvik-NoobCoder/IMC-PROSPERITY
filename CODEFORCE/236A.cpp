#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
    int repeating =0;
    string s;
    cin >>s;
    unordered_set <char> st(s.begin(),s.end());
    if(st.size()%2!=0){
        cout<<"IGNORE HIM!" <<endl;
    }else{
        cout <<"CHAT WITH HER!"<<endl;
    }
}