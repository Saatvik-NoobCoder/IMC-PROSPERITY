#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b = 0;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin >> a[i];
            if(a[i] == 2){
                b++;
            }
        }
        if(b!=0){
            int d = 0;
            if(b%2 == 1){
                cout << -1  <<endl;
            }else{
                for(int i = 0;i<n;i++){
                    if(a[i] == 2){
                        d++;
                        if(d == b/2){
                            cout << i+1 <<endl;
                            break;
                        }
                    }
                }
            }
        }else{
            cout << 1<<endl;
        }
    }
}