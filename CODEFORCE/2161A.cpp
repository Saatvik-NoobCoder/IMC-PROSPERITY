#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R0, X, D, n;
        cin >> R0 >> X >> D >> n;
        string rounds;
        cin >> rounds;
        vector<pair<pair<int, int>, int>> cur;
        cur.push_back({{R0, R0}, 0});

        for (char c : rounds) {
            vector<pair<pair<int, int>, int>> next;

            for (auto it : cur) {
                int L = it.first.first;
                int R = it.first.second;
                int count = it.second;

                if (c == '1') {
                    int newL = max(0LL, L - D);
                    int newR = R + D;
                    next.push_back({{newL, newR}, count + 1});
                } else {
                    if (L < X) {
                        int left = L;
                        int right = min(R, X - 1);
                        if (left <= right) {
                            int newL = max(0LL, left - D);
                            int newR = right + D;
                            next.push_back({{newL, newR}, count + 1});
                        }
                    }
                    if (R >= X) {
                        int left = max(L, X);
                        int right = R;
                        if (left <= right) {
                            next.push_back({{left, right}, count});
                        }
                    }
                }
            }

            if (next.empty()) {
                cur.clear();
                break;
            }
            sort(next.begin(), next.end());
            vector<pair<pair<int, int>, int>> merged;
            int currentRentL = next[0].first.first;
            int currentR = next[0].first.second;
            int currentCount = next[0].second;

            for (int i = 1; i < (int)next.size(); i++) {
                int L = next[i].first.first;
                int R = next[i].first.second;
                int count = next[i].second;

                if (L <= currentR) {
                    currentR = max(currentR, R);
                    currentCount = max(currentCount, count);
                } else {
                    merged.push_back({{currentRentL, currentR}, currentCount});
                    currentRentL = L;
                    currentR = R;
                    currentCount = count;
                }
            }
            merged.push_back({{currentRentL, currentR}, currentCount});
            cur = merged;
        }

        int ans = 0;
        for (auto it : cur) ans = max(ans, it.second);
        cout << ans << endl;
    }

    return 0;
}