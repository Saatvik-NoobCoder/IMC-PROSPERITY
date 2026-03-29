#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    ll n;
    cin >> n;
    vector <vector<int>> a(n, vector<int>(n));
    for(int i = 0; i <n ; i++){
        for (int j = 0; j< n; j++){
            cin >> a[i][j];
        }
    }
    vector <int> dp(n,0);
    vector <int> dp2(n,0);
    for(int  i = 0;i<n;i++){
        if(i == 0){
            int maxs = 0;
            int place;
            for(int j = 0;j<n;j++){
                maxs = (maxs, a[i][j]);
                place = j;
            }
            dp2[i] = place;
            dp[i] = maxs;
        }else{
            int maxs = 0;
            int place;
            for(int j = 0;j<n;j++){
                maxs = (maxs, a[i][j]);
                place = j;
            }
            if(dp2[i-1]==place){
                
            }

        }
        

    }
    return 0;
}