#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int shift =0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            shift++;
        }
    }

    cout << shift <<endl;


    return 0;
}
