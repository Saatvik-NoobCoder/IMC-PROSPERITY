#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int protection = 0;
        int last_one = -10000; 

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last_one > k - 1) {
                    protection++;
                }
                last_one = i;
            }
        }

        cout << protection << "\n";
    }
}