#include<iostream>
using namespace std;
//FUNCTIONS



// // 1. Hello world
// int print_Hello(){
//     cout << "Hello\n";
//     return 3;
// }
// int main(){
// //call function
// print_Hello(); 
// cout << print_Hello() <<endl;
//     return 0;
// }

//2. min of 2 values
// double min(double a, double b){
//     if (a > b){
//         return b;
//     }else{
//         return a;
//     }
// }

// int main(){
//     double a;
//     cout << "Enter a number: ";
//     cin>> a;
//     double b;
//     cout << "Enter a second number: ";
//     cin>> b;
//     if (a==b){
//         cout << "Both are equal"<< endl;
//     }else{

//     cout << "Minimum of two is : " << min(a,b) << endl;}

// }


// 3. sum of 1 to N
// int sum (int N){
//     int total = 0;
//     for (int i = 1; i<= N; i++){
//         total += i;
//     }
//     return total;
// }

// int main (){
//     cout << sum(4)<< endl;
//     cout << sum(5) <<endl;
//     cout << sum (6) << endl;
//     cout << sum (7)<<endl;

// }

//4. FActorial
// int fact(int N){
//     int initial_product = 1;
//     for (int i= 1; i <= N; i++){
//         initial_product *= i;

//     }
//     return initial_product;
// }

// int main() {
//     cout << fact(3) << endl;
//     cout << fact(4) << endl;
//     cout << fact(5) << endl;
// }


//5. Sum of digits of number
// int sum (int N){
//     int digSum = 0;

//     while (N > 0){
//         int lastDig = N % 10;
//         N /= 10;

//         digSum += lastDig;

//     }
//     return digSum;
// }

// int main () {
//     cout << "sum is : " << sum (374837) << endl ;
//     cout << "sum is : " << sum (374) << endl ;
//     cout << "sum is : " << sum (28372) << endl ;
//     cout << "sum is : " << sum (12214) << endl ;
//     cout << "sum is : " << sum (10087) << endl ;

// }


// //6. to check if a number is prime and further complications
// int prime(int N){
//     if (N < 2) return 0;
//     for (int i = 2; i * i <= N; i++ ){
//         if (N % i == 0){
//             return 0;
//         }else{
//             return 1;
//         }
//     }     
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (prime(num)){
//         cout << num << " is a prime number." << endl;
//     }else{
//         cout << num << " is not a prime number." << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day number";
    }
    cout <<endl;

    return 0;
}
