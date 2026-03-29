#include <iostream>
using namespace std;
int main (){
// 1. bitwise operators
// i. bitwise and (&)
// literally similar to AND logic gate
// 0 & 0 -> 0; 1 & 0 -> 0; 0 & 1 -> 0; 1 & 1 -> 1
// 42 -> 101010; 50 -> 110010 
// 42 & 50 -> 100010 -> 34

// ii. bitwise or (|)
// literally similar to OR logic gate
// 0 | 0 -> 0; 1 | 0 -> 1; 0 | 1 -> 1; 1 | 1 -> 1
// 42 -> 101010; 50 -> 110010 
// 42 | 50 -> 111010 -> 58

// iii. bitwise XOR (^) -> "exclusive or"
// if bits same then output 0 if different 1
// 1 ^ 0 -> 1; 1 ^ 1 -> 0
// 42 ^ 50 -> 011000 -> 11000 -> 24

// iv. bitwise left shift  (<<)
// ex: 42 -> 101010 
// cout << (42 << 1)<< endl; -> 84
// 1 is the value by which the binary number is shifted in the left
// therefore after shifting in left... (101010_)-> blank is filled by '0'
// (42<<1) -> 1010100 -> 84
// (50<<1) -> 1100100 -> 100

// iv. bitwise right shift  (>>)
// ex: 42 -> 101010 
// cout << (42 >> 1)<< endl; -> 21
// 1 is the value by which the binary number is shifted in the right
// therefore after shifting in right... (_10101)-> blank is filled by '0'... after shifting right the number is dropped
// (42>>1) -> 10101 -> 21
// (50>>1) -> 11001 -> 25

// SHORTCUT WHY? LEFT SHIFT AND RIGHT SHIFT
// LEFT SHIFT -> (n<<i) -> n * 2^i -> here n = 42 and i =1 therefore output was 84
// RIGHT SHIFT -> (n>>i) -> n / 2^i -> here n = 42 and i =1 therefore output was 21

// Data type modifiers
// int occupies 4 byte space #generally below are used for int only
// 1. long -> increase the byte space -> '=>4' -> generally 8 ; "long int = " #format
// 2. short -> decreases the byte space -> "<4" -> generally 2 ; "short int= "
// 3. long long -> increases the byte space further #in my current system (macbook air M1) still changes to 8
// 4. signed -> int has (8*4) bits -> -2^ 31 to 2^31 -1 -> includes all -ve to +ve numbers
// 5. unsigned -> can store +ve integers upto 2^32 - 1 -> all -ve spaces are used for +ve numbers 
// try unsigned int x = -10; cout << x << endl; output will be 4294967286 -> now MSB is all being used as a bit like others




//1. FIGURE OUT HOW TO FIND IF A NUMBER IS A POWER OF 2 WITHOUT ANY LOOP
//i. loops
int n;
cout << "Enter a number : ";
cin >> n;
bool isnot_power = true;
int m = 1;
for (int i = 1; i<=n ; i++){
    m *= 2;
    if (m == n){
        isnot_power = false;
        break;
    }
}

if(isnot_power){
    cout << n << " is not a power of 2\n";
}else{
    cout << n << " is a power of 2\n";
}



    
    return 0;
}