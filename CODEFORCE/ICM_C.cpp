#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<long long>a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    int k=min(20,n);
    int pref=n-k;
    vector<long long>fact(k+1,1);
    for(int i=1;i<=k;i++) fact[i]=fact[i-1]*i;
    vector<long long>prefxor(pref+1,0);
    for(int i=1;i<=pref;i++)
        prefxor[i]=prefxor[i-1]^a[i-1];
    vector<long long>base;
    for(int i=pref;i<n;i++) base.push_back(a[i]);
    while(q--){
        long long x,l,r;
        cin>>x>>l>>r;
        x--;
        vector<long long>v=base;
        vector<long long>perm;
        long long t=x;
        for(int i=k;i>=1;i--){
            long long idx=t/fact[i-1];
            if(idx>=v.size()) idx=v.size()-1;
            perm.push_back(v[idx]);
            v.erase(v.begin()+idx);
            t%=fact[i-1];
        }
        long long ans=0;
        for(int i=l;i<=r;i++){
            if(i<=pref)
                ans^=a[i-1];
            else
                ans^=perm[i-pref-1];
        }
        cout<<ans<<endl;
    }
}