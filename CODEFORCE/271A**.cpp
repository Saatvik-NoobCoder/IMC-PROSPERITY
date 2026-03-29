#include <bits/stdc++.h>
using namespace std;

bool dc(int n){
    vector<int> digits;
    while (n>0){
        digits.push_back(n%10);
        n/=10;
    }
    set<int> distinct(digits.begin(),digits.end());
    if (distinct.size()==digits.size()) return 1;
    else return 0;

}

int main(){
    int year;
    cin>>year;
    int ans=year+1;
    while(dc(ans)==0){
        ans++;
    }
    cout<<ans;
}