#include <iostream>
#include <vector>
#include <climits>
using namespace std;

double max_avg(int size, vector<int> &data) {
    double maxAvg = INT_MIN;

    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += data[j];
            double currAvg = (double)sum / (j - i + 1);
            maxAvg = max(maxAvg, currAvg);
        }
    }
    return maxAvg;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> data(size);
        for (int i = 0; i < size; i++) cin >> data[i];
        cout << max_avg(size, data) << endl;
    }
}