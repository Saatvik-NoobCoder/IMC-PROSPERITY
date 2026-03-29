#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int l = 0;
    int r = n;
    int ans;
    while(l<=r){
        int mid = (l+r)/2;
        int  need = (5*mid*(mid+1)/2);
        int available = 240-k;
        if(need<=available){
            ans = mid;
            l=mid+1;
        }else{
            r = mid-1;
        }
    }
    cout << ans <<endl;
}