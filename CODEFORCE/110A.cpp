#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    int num=0;
    for(char c: n){
        if(c == '7' || c =='4'){
            num++;
        }
    }
    if(num== 7|| num == 4){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
}