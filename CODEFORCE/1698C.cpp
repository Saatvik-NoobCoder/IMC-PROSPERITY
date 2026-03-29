#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        int czero=0, pos =0, neg =0;
        for(auto &x : a){
            cin >> x;
            if(x==0){
                czero++;
            }else if(x > 0){
                pos++;
            }else{
                neg++;
            }
        }
        
        unordered_set<int>s(a.begin(),a.end());
        if(pos>2 || neg > 2){
            cout << "NO" <<endl;
            continue;
        }
        vector <int> af;
        for(auto x: a){
            if(x!=0){
                af.push_back(x);
            }
        }
        for(int i =0; i<min(3,czero); i++){
            af.push_back(0);
        }
        bool sum_exist = true;
        for(int i =0; i<af.size();i++){
            for(int j =i+1; j<af.size();j++){
                for(int k =j+1; k<af.size();k++){
                    int sum = af[i] + af[j] + af[k];
                    if(s.find(sum) == s.end()){
                        sum_exist = false;
                        break;
                    }
                }
                if(!sum_exist)break;
            }
            if(!sum_exist)break;
        }
        if(sum_exist){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }

    return 0;
}