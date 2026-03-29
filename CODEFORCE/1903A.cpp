#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size, maxRev;
        cin >> size >> maxRev;
        vector <int> a(size);
        for(int i=0; i< size; i++){
            cin >> a[i];
        }
        bool sorted = true;
        if(maxRev == 1){
            for(int i=0; i<size-1; i++){
                if(a[i]>a[i+1]){
                    sorted = false;
                    break;
                }
            }
            if(sorted){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            cout <<"Yes"<<endl;
        }
        
    }
}