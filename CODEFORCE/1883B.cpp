#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> freq;
        for(char c: s){
            freq[c]++;
        }
        int odds = 0;
        for(auto &p: freq){
            if(p.second %2==1){
                odds ++;
            }
        }
        if(odds>k+1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }

}