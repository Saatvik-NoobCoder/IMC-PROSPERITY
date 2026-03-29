#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    using ll = long long;
    const ll MOD = 1e9+7;

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <ll> a(n);
        for(int i=0;i <n;i++){
            cin >> a[i];
        }
//         ll cost =0;
//         while(n>1){
//             vector<ll>b(n);
//             for(int i =0;i<n;i++){
//                 if(i==n-1){
//                     b[i] = max(a[i],a[0]);
//                 }else{
//                     b[i] = max(a[i],a[i+1]);
//                 }
//             }
//             int mins = INT_MAX;
//             int place;
//             for(int i = 0; i < n; i++){
//                 if(b[i] < mins){
//                     mins = b[i];
//                     place = i;
//                 }
//             }
//             cost += mins;
//             if(place != n-1){
//                 if(a[place] >= a[place+1]){
//                     a.erase(a.begin()+place+1);
//                     n--;
//                 }else{
//                     a.erase(a.begin()+place);
//                     n--;
//                 }
//             }else{
//                 if(a[n-1] >= a[0]){
//                     a.erase(a.begin());
//                     n--;
//                 }else{
//                     a.erase(a.begin()+n-1);
//                     n--;
//                 }
//             }
            

//         }
//         cout << cost << endl;
        
//     }

//     return 0;
// }
        ll sum = 0;
        ll mx = 0;

        for(int i = 0; i < n; i++) {
            ll v = max(a[i], a[(i + 1) % n]);
            sum += v;
            mx = max(mx, v);
        }

        cout << sum - mx << endl;;
    }

    return 0;
}