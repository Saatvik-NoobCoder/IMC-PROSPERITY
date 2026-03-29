#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        int moves=0;
        if(b>d){
            cout<<-1<<endl;
        }else{
            moves += d-b;
            if(a+(d-b)==c){
                cout<<moves<<endl;
            }else if(a+(d-b)<c){
                cout<<-1<<endl;
            }else{
                moves+=(a+(d-b)-c);
                cout<<moves<<endl;
            }
            
        }
    }
    return 0;
}