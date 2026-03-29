#include <iostream>
using namespace std;

int  main(){
    int t;
    cin >>t;
    while(t--){
        int x;
        cin >> x;
        int i,a=0;
        if(x<10){
            i=x;
            a +=1;
        }else if(x<100){
            i=x/11;
            a +=3;
        }else if(x<1000){
            i=x/111;
            a +=6;
        }else{
            i=x/1111;
            a +=10;
        }
        cout << 10*(i-1)+a <<endl;
    }
}