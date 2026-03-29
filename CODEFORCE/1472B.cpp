#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin>>size;
        vector <int> weight(size);
        for(int i=0; i< size;i++){
            cin >> weight[i];
        }
        int ones = 0;
        int totalWeight=0;
        for(int i=0;i<size;i++){
            totalWeight += weight[i];
            if(weight[i]==1){
                ones++;
            }
        }
        if(totalWeight%2!=0){
            cout <<"No"<<endl;
        }
        else{
            if((totalWeight/2)%2 == 1&& ones == 0){
            cout << "No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
}