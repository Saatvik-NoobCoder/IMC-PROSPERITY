#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inp(type, n) type n; cin >> n;
#define f(i, s, n) for (int i = s; i < n; i++)
#define sv(vec) sort(vec.begin(),vec.end())
#define mx(vec) *max_element(vec.begin(),vec.end())
#define mn(vec) *min_element(vec.begin(),vec.end())
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

int dis(int x1, int x2, int y1, int y2){
    return ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        inp(int,n);
        vector<pair<int,int>> v(n);
        f(i,0,n){
            cin>>v[i].first;
            cin>>v[i].second;
        } 
        int xs,xe,ys,ye;
        cin>>xs>>ys>>xe>>ye;
        int p=dis(xs,xe,ys,ye);
        int de = LLONG_MAX;
        f(i,0,n){
            de=min(de,dis(xe,v[i].first,ye,v[i].second));
        }
        if (p<de) yes;
        else no;
    }
    return 0;
}