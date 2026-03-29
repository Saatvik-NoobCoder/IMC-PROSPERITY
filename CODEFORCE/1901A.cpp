#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector <int> a(n);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        int maxDif=a[0];
        for(int i=0;i<n-1;i++){
            maxDif=max(maxDif,(a[i+1]-a[i]));
        }
        if(maxDif<2*(x - a[n-1])){
            cout << 2*(x-a[n-1]) <<endl;
        }else{
            cout << maxDif <<endl;
        }
    }
}