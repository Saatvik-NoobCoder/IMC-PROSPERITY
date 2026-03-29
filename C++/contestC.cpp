#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        cin>>s;
        int x= s[s.size()-1]-'0';
        int y= s[s.size()-2]-'0';
        int num=(y*10)+x;
        int n1=1,n2,n3,n4;
        if (num%4==0) {n2=1; n3=1; n4=1;}
        else if (num%4==1) {n2=2; n3=3; n4=4;}
        else if (num%4==2) {n2=4; n3=4; n4=1;}
        else {n2=3; n3=2; n4=4;}
        cout<<((n1+n2+n3+n4)%5)<<endl;
    return 0;
}