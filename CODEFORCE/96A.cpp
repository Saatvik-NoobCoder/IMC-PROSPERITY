#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1;
    int maxCount = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    if (maxCount >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}