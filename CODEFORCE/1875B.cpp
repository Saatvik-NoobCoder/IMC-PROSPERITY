#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        int amin = 0, bmax = 0;
        for(int i = 1; i < n; i++)
            if(a[i] < a[amin]) amin = i;
        for(int i = 1; i < m; i++)
            if(b[i] > b[bmax]) bmax = i;
        if(b[bmax] > a[amin])
            swap(a[amin], b[bmax]);
        k--;
        if(k % 2 == 1){
            int amax = 0, bmin = 0;
            for(int i = 1; i < n; i++)
                if(a[i] > a[amax]) amax = i;

            for(int i = 1; i < m; i++)
                if(b[i] < b[bmin]) bmin = i;

            if(a[amax] > b[bmin])
                swap(a[amax], b[bmin]);
        }

        long long ans = 0;
        for(int x : a) ans += x;
        cout << ans << endl;
    }
}