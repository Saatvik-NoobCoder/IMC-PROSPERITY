#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (x > y) {
            cout << 1 << " " << y << "\n";
        } else {
            cout << 0 << " " << y << "\n";
        }
    }
    return 0;
}