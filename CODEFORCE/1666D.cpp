// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;
// bool allZero(const unordered_map<char,int>&m){
//     for(auto &p :m){
//         if(p.second !=0){
//             return false;
//         }
        
//     }return true;
// }
// int main(){
//     int n;
//     cin >> n;
//     while(n--){
//         string s, t;
//         cin >> s >> t;
//         unordered_map<char,int> m;
//         for(char c : t){
//             m[c]++; 
//         }
//         for(int i=0; i<s.size(); i++){
//             if(m.find(s[i])!= m.end()){
//                 m[t[i]]--;
//             }
//             if(allZero(m)){
//                 if(m.find(s[i])!=m.end()){
//                     cout <<"No"<<endl;
//                 }else{
//                     cout <<"Yes" <<endl;
//                 }

//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;

        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) j++;
            i++;
        }

        if (j == t.size()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}