#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> mins(n), maxs(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        mins[0] = a[0];
        for(int i = 1; i < n; i++){
            mins[i] = min(mins[i-1], a[i]);
        }
        maxs[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--){
            maxs[i] = max(maxs[i+1], a[i]);
        }
        for(int i = 0; i < n; i++)
            cout << (a[i] == mins[i] || a[i] == maxs[i] ? 1 : 0);

        cout << endl;
    }
}