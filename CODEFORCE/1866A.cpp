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
    for(int i=0;i<n;i++){
        if(a[i]<0){
            a[i]=a[i]-(2*a[i]);
        }
    }
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        smallest = min(smallest,a[i]);
    }
    cout <<smallest<<endl;
}