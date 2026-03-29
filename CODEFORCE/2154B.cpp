#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> array(n);
        for(int i=0; i<n;i++){
            cin>>array[i];
        }
        int max = array[0];
        for(int i=0; i<n-1;i++){
            if(array[i]>max){
                max = array[i];
            }
        }
        int ans=0;
        for(int i =0;i<n-1;i++){
            if(i%2 != 1){
                if(array[i]>=array[i+1] && array[i+1]!= max){
                    array[i+1] =max;
                }if(array[i]>=array[i+1] && array[i+1]== max){
                    array[i]--;
                    ans++;
                }
            }else{
                if(array[i]>=array[i+1]&& array[i+1]!= max){
                    array[i]=max;
                }if(array[i]>=array[i+1]&& array[i+1]==max){
                    array[i+1]--;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}