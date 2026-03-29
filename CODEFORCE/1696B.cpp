#include <iostream>
#include <vector>
using namespace std;

int number_snaps(int size, vector<int>& universe) {
    int segments = 0;
    for (int i = 0; i < size; ) {
        if (universe[i] != 0) {
            segments++;
            while (i < size && universe[i] != 0)
                i++;
        } else {
            i++;
        }
    }
    return min(segments, 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<int> universe(size);
        for (int i = 0; i < size; i++) {
            cin >> universe[i];
        }
        cout << number_snaps(size, universe) << endl;
    }
    return 0;
}