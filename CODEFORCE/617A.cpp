#include <iostream>
using namespace std;

int steps(int house){
    int steps = 0;
    while(house >0){
        if(house >= 5){
            house -= 5;
            steps++;
        }
        else if(house >= 4){
            house -= 4;
            steps++;

        }
        else if(house >= 3){
            house -= 3;
            steps++;

        }
        else if(house >= 2){
            house -= 2;
            steps++;

        }
        else if(house >= 1){
            house -= 1;
            steps++;

        }
    }
    return steps;
}

int main(){
    int house;
    cin >> house;
    cout << steps(house) << endl;
}