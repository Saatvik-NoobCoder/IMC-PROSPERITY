#include <iostream>
using namespace std;

int dominos (int length, int breadth){
    return (length * breadth)/2;

}

int main (){
    int length, breadth;
    cin >> length>> breadth;

    cout << dominos(length, breadth) << endl;



    return 0;

}
