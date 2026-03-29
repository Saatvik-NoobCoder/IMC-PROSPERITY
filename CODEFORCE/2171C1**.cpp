#include <iostream >
#include <vector>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        vector <int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ajiOnes=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                ajiOnes++;
            }
        }
        int maiOnes=0;
        for(int i=0;i<n;i++){
            if(b[i]==1){
                maiOnes++;
            }
        }
        if((maiOnes%2)==(ajiOnes%2)){
            cout<<"Tie"<<endl;
        }else{
            if(n%2==0){
                if(maiOnes>ajiOnes){
                    cout << "Ajisai"<<endl;
                }else{
                    cout<<"Mai"<<endl;
                }
            }else{
                if(maiOnes>ajiOnes){
                    cout << "Mai"<<endl;
                }else{
                    cout<<"Ajisai"<<endl;
                }

            }
        }
        
    }
}