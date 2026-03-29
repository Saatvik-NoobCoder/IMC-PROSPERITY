#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >>n;
    vector <int> array(n);
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    int length =1;
    int maxLength =1;
    for(int i=0;i<n-1;i++){
        if(array[i]<array[i+1]){
            length++;
            maxLength = max(maxLength,length);
        }else{
            length=1;
        }
    }
    cout<<maxLength<<endl;
    
}