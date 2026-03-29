#include<iostream>
using namespace std;
int main (){
    //if...else statements
    
    //1. first code
    // cout << "Enter a number: ";
    // int num;
    // cin >> num;
    // if (num>0){
    //     cout << "The number is positive.\n";
    // }
    // else if (num==0){
    //     cout << "The number is 0.\n";

    // }else{
    //     cout << "the number is negative.\n";
    // }


    //2. second code
    // cout << "WElCOME WE ARE CHECKING ODD AND EVEN \n";
    // int num;
    // cout << "Enter a number: ";
    // cin>> num;
    // if (num % 2 == 0){
    //     cout<< "The number is even.\n";
    // }else{
    //     cout << "The number is odd. \n";
    // }

    
    //3. Third Code
    // char ch;
    // cout << "Enter a character to check lower case or upper case : ";
    // cin >> ch;
    // int n = ch;//need not to do this as characters are stored as integer by compiler only...
    // if (n>=65 && n <= 90) {
    //     cout << "Uppercase\n";
    // }else if(n>=97 && n <= 122){
    //     cout << "Lowercase\n";
    // }else{
    //     cout << "Kindly Enter a valid character\n";
    // }


    //4. Ternary Statements
    //  int n;
    //  cout << "Enter a number : ";
    //  cin >> n;
    //  cout << (n >= 0 ? "Positive" : "Negative") << endl; // question ke baad ?, yes answer ke liye pehle likhenge, no ke liye baad mein


    //5. loops
    // first loop code
    // int n;
    // cout << "enter a number: ";
    // cin >> n;
    // int sum = 0;
    // for(int i = 1; i<=n; i++ ){
    //     sum += i;
    // }
    // cout<< "sum is " << sum << endl;

    // second loop code
    // int n;
    // cout << "enter a number : ";
    // cin >> n;
    // //calc. odd sum while loop
    // int i = 1;
    // int sum = 0;
    // while(i <= n){
    //     sum += i;
    //     i += 2;
    // }

    // cout << "Sum is " << sum << endl;

    //third loop code
    // int n;
    // cout <<"enter a number : ";
    // cin >> n;
    // bool is_prime = true;
    // // check if this is a prime number
    // for (int i = 2; i < n; i++){
    //     if (n%i == 0){
    //     is_prime = false;
    //     break;
    //     };
    // };

    // if (is_prime == true){
    //     cout << "Prime Number\n";

    // }else{
    //     cout << "Composite Number\n";
    // }

//1. FIGURE OUT HOW TO FIND IF A NUMBER IS A POWER OF 2 WITHOUT ANY LOOP

//i. loops
// int n;
// cout << "Enter a number : ";
// cin >> n;
// bool isnot_power = true;
// int m = 1;
// for (int i = 1; i<=n ; i++){
//     m *= 2;
//     if (m == n){
//         isnot_power = false;
//         break;
//     }
// }

// if(isnot_power){
//     cout << n << " is not a power of 2\n";
// }else{
//     cout << n << " is a power of 2\n";
// }

//ii. USING BITWISE SHIFTING
// int n;
// cout << "Enter a number : ";
// cin >> n;
// bool isnot_power = true;
// int m =2;
// int power = -1;
// for (int i = 1; i<=n; i++){
//     int m_new = m << i;
//     if ( n == m_new ){
//         isnot_power = false;
//         power += i;
//         break;
//     }
// }

// if (isnot_power){
//     cout << n << " is not a power of 2\n";
// }else{
//     cout << n << " is a power of 2 and that is " << power << " power of 2\n";
// }


//2. WAP to reverse an integer n.
int n;
cout << "Enter a number : ";
cin >> n;
int initial_power = 10;
while (n>0){
    n /= initial_power;
    n %= initial_power;
    initial_power *= 10;
    cout << n<< endl;

}


    
    return 0;


}
