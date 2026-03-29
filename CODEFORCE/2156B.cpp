#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--){
            int k;
            cin>>k;
            int counter=0;
            while (k>0){
                for (int i=0;i<s.size() && k>0;i++){
                    if (s[i]=='B') {
                        k=k/2;
                        counter++;
                    }
                    else {
                        k-=1;
                        counter++;
                    }
                }
            }
            cout<<counter<<endl;
        }
    }
    return 0;
}