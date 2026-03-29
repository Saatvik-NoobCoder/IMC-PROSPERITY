#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, v;
    cin >> t >> v;
    vector<int> vec(t);
    for (int i=0; i<t; i++) cin>>vec[i];
    unordered_map<int, int> freq;
    long long count = 0;
    for (int i=0; i<t; i++) {
        int y = vec[i] ^ v;
        if (freq.find(y) != freq.end()) {
            count += freq[y];
        }
        freq[vec[i]]++;
    }
    cout << count;
    return 0;
}