#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        for (int i = n; i >= 1; --i) {
                cout << i << " ";
            }
            cout << n << " ";
            for (int i = 1; i < n; ++i) {
                cout << i << ( (i == n-1) ? "" : " ");
            }
            cout <<"\n";
    }
    
    return 0;
}

