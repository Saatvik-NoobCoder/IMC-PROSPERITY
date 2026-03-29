#include <iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    float perTicket = b/m;
    if(perTicket>=a){
        cout << n*a <<endl;
    }else{
        int price1= (n/m)*b + (n%m)*a;
        int price2= (n/m)*b + b;
        cout << min(price1,price2)<<endl;
    }
}