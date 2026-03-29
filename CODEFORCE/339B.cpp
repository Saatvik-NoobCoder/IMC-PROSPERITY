#include <iostream>
#include <vector>
using namespace std;
 int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    long long time =(a[0]-1);
    for(int i=0;i<m-1;i++){
        if(a[i]>a[i+1]){
            time+= (n-a[i]+a[i+1]);
        }else if(a[i]<a[i+1]){
            time += (a[i+1]-a[i]);
        }else{
            time+=0;
        }
    }
    cout << time <<endl;

    return 0;
}