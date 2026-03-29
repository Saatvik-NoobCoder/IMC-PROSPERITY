#include <iostream>
using namespace std;

int ans(int number, int subtractions){
    while(subtractions > 0){
        if(number%10 != 0){
            number -= 1;
            subtractions--;
        }else{
            number /= 10;
            subtractions--;
        }
    }
    return number;
}

int main(){
    int number, subtractions;
    cin >> number >> subtractions;
    cout << ans(number,subtractions)<<endl;
}