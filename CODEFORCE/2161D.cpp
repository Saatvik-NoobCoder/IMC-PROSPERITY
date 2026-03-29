#include <iostream>
#include <vector>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        vector <int> Int(n);
        for(int i= 0;i<n;i++){
            cin >> Int[i];
        }
        int remove = 0;
        for(int i = 0;i<n-1;i++){
            if(Int[i+1]-Int[i]==1){
                Int.erase(Int.begin()+i+1);
                remove++;
            }
        }
        cout <<remove <<endl;

    }
}