#include<iostream>
using namespace std;
int main (){
//to convert decimal to binary number system
string ask;
cout << "Hello! You want to Convert into Binary or Decimal: ";
cin >> ask;
int n;
cout << "Enter a number : ";
cin >> n;
if (ask == "Binary" || ask == "binary"){
    int power = 1;
    int final_number = 0;
    while (n > 0){
        
        int binaryDig = n % 2;//face value
        n /= 2;
        int binaryNum = binaryDig * power;//place value
        power *= 10;
        final_number += binaryNum;
    }
    cout << "Binary : " << final_number<< endl ;
}else if(ask == "Decimal" || ask == "decimal"){
    int pow = 1;
    int final_sum = 0;
    while ( n > 0 ){
        int dec_Digit = n % 10;
        n /= 10;
        int sum = pow * dec_Digit;
        pow *= 2;
        final_sum += sum;
    }

    cout << "Decimal is " << final_sum << endl;
};




return 0;
}








