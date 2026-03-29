#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solutions(int size, int queries, vector<int>& array, int lj, int rj) {
    int ans = 0;

    // Step 1: Count frequency in the subarray [lj, rj]
    unordered_map<int, int> freq;
    for (int i = lj - 1; i < rj; i++) {
        freq[array[i]]++;
    }

    // Step 2: For each element in the array, check if freq == value
    for (int i = 0; i < size; i++) {
        if (freq[array[i]] == array[i]) {
            ans++;
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size, queries, lj, rj;
    cin >> queries >> size >> lj >> rj;

    vector<int> array(size);
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << solutions(size, queries, array, lj, rj);
    return 0;
}