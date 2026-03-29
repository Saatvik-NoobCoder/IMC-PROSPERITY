#include <iostream>
#include <string>
using namespace std;

bool isLucky(int x) {
    string s = to_string(x);
    for (char c : s) {
        if (c != '4' && c != '7') return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}