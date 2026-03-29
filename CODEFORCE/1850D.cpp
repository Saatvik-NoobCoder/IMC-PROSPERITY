#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = 1;
        int newl = 1;
        for(int i = 0; i < n - 1; i++){
            if(a[i+1] - a[i] <= k){
                l++;
            }else{
                l = 1;
            }
            newl = max(newl, l);
        }

        cout << n - newl << endl;
    }
}