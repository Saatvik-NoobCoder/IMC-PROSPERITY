#include <iostream>
#include <vector>
using namespace std;

int main(){
      int t;
      cin >>t;
      while(t--){
            vector<int>sides(4);
            for(int i=0; i<4; i++){
                cin>>sides[i];
            }
            int count =1;
            for(int i=0; i<3; i++){
                if(sides[i]==sides[i+1]){
                    count++;
                }
            }
            if(count == 4){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
}