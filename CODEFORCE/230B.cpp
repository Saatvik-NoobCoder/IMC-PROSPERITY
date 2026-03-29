#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int x){
    if(x<2){
        return false;
    }
    for(int i = 2;i*i<=x;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
}