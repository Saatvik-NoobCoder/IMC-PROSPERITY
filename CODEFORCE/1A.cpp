#include <iostream>
using namespace std;

long long tiles(long long length, long long breadth, long long sides) {
    long long tiles_length = (length + sides - 1) / sides;
    long long tiles_breadth = (breadth + sides - 1) / sides;
    return tiles_length * tiles_breadth;
}

int main() {
    long long length, breadth, sides;
    cin >> length >> breadth >> sides;
    cout << tiles(length, breadth, sides) << endl;
    return 0;
}


  cin >> length >> breadth >> sides;
    cout << tiles(length, breadth, sides) << endl;
    return 0;






