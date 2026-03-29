#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    while(b){
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

ll lcm(ll a,ll b){
    return a/ gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll a,b,c,m;
        cin >>a>>b>>c>>m;
        ll A=m/a;
        ll B=m/b;
        ll C=m/c;
        ll ab=lcm(a,b);
        ll ac=lcm(a,c);
        ll bc=lcm(b,c);
        ll abc=lcm(ab,c);
        ll AB=m/ab;
        ll AC=m/ac;
        ll BC=m/bc;
        ll ABC=m/abc;
        ll af=0,bf=0,cf=0;
        af+=2*ABC;
        bf+=2*ABC;
        cf+=2*ABC;
        ll abo = AB-ABC;
        ll aco = AC-ABC;
        ll bco = BC-ABC;
        af+= 3*(abo+aco);
        bf+= 3*(abo+bco);
        cf+= 3*(aco+bco);
        ll ao=A-AB-AC+ABC;
        ll bo= B-AB-BC+ABC;
        ll co= C-AC-BC+ABC;
        af+= 6*ao;
        bf+= 6*bo;
        cf+= 6*co;

        cout <<af<< " " <<bf<< " " <<cf << endl;
    }

    return 0;
}