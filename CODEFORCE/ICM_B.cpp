#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> ans;

    ans.push_back({0,0});

    if(n > 2) {
        ans.push_back({2,1});
        ans.push_back({1,2});
    }

    for(auto &p : ans)
        cout << p.first << " " << p.second << "\n";
}