#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
        }
    }
    if(count == 0){
        cout <<"EASY"<<endl;
    }else{
        cout <<"HARD"<<endl;
    }
}