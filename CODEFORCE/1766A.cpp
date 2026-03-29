#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long count = 0;
        for (long long base = 1; base <= n; base *= 10) {
            for (int d = 1; d <= 9; d++) {
                if (d * base <= n) count++;
            }
        }
        cout << count << endl;
    }
}