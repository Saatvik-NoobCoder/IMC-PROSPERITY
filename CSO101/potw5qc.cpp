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
        string s1;
        string s2;
        cin >> s1 >>s2;
        stringstream ss1(s1);
        string day1,month1,year1;
        getline(ss1, day1, '/');
        getline(ss1, month1, '/');
        getline(ss1, year1, '/');
        stringstream ss2(s2);
        string day2,month2,year2;
        getline(ss2, day2, '/');
        getline(ss2, month2, '/');
        getline(ss2, year2, '/');
        
        

        int d1 = stoi(day1);
        int m1 = stoi(month1);
        int y1 = stoi(year1);
        int d2 = stoi(day2);
        int m2 = stoi(month2);
        int y2 = stoi(year2);

        int ans = 0;
        while(d2)


        
    }

    return 0;
}