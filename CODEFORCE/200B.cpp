#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> p(n);
    for(int i=0;i<n;i++){
        cin >>p[i];
    }
    float total=0;
    for(int i=0;i<n;i++){
        total += p[i]/100.0;
    }
    cout << (total/n)*100 <<endl;
}