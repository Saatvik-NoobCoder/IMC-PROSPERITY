#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll summation(string x){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    using ll = long long;
    const ll MOD = 1e9+7;
    ll sum = 0LL;
    for(char c : x){
        sum += c - '0';
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    using ll = long long;
    const ll MOD = 1e9+7;

    int t;
    cin >> t;
    while(t--) {
        string x;
        int ans = 0;
        while(summation(x) >= 10){
            char digit = '0';
            int maxs = -1;
            for(char c:x){
                if(c-'0' > maxs){
                    maxs = c -'0';
                    digit = c;
                }
            }
            if(digit !=)
            
        }
        
    }

    return 0;
}