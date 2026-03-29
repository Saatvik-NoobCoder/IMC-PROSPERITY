#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int n;
    cin >> n;
    int x1,y1,z1;
    cin >> x1 >> y1 >> z1 ;
    int x2,y2,z2;
    cin >> x2 >> y2 >> z2 ;
    int x3,y3,z3;
    cin >> x3 >> y3 >> z3 ;
    if(x1 + x2 + x3 == 0 && y1 + y2 + y3 == 0 && z1 + z2 + z3 == 0){
        cout << "YES" << endl;
    }else{
        cout <<  "NO" <<endl;
    }

    return 0;
}