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
        cin>>n;
        vector <int> a(n);
        vector <int> temp(n);

        for (int i =0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
    int l=0;
    int r=n-1;
    bool flag=true;
    for (int i=0;i<n;i++){
        if(i%2==0){
            temp[i]=a[l++];
        }
        else{
            temp[i]=a[r--];
        }
    }
    for (int i=0;i<n-2;i++){
        if(temp[i]+temp[i+1]!=temp[i+1]+temp[i+2]){
            flag=false;
            break;
        }
    }
    if (flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
       
        // unordered_map<int,int> mp;

        // for(int x : a){
        //     mp[x]++;
        // }

        // if(mp.size() >= 3){
        //     cout << "NO" << endl;
        // }
        // else if(mp.size() == 1){
        //     cout << "YES" << endl;
        // }
        // else{
        //     auto it = mp.begin();
        //     int f1 = it->second;
        //     it++;
        //     int f2 = it->second;

        //     if(abs(f1 - f2) <= 1)
        //         cout << "YES" << endl;
        //     else
        //         cout << "NO" << endl;
        // }


    }
        

    return 0;
}