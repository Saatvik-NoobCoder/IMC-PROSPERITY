#include <iostream>
using namespace std;
int main(){

    //Nested Loops And Patterns


    // 1. first pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// for(int i=1; i<= n; i++){
//     char ch = 'A';
//     for(int j = 1; j<=n; j++){
//         cout << ch << " ";
//         ch++;
//     }
//     cout << endl;
// }


//2. second pattern
// i. num version 
// int n;
// cout << "Enter a number: ";
// cin >> n;
// int num = 1;
// for (int i = 0; i<n; i++){
//     for (int j = 0; j < n; j ++){
//         cout << num << " ";
//         num ++;
//     }
//     cout  << endl;
    
//         }
    
// ii. char version
// int n;
// cout << "Enter a number: ";
// cin >> n;
// char ch = 'A';
// for (int i = 0; i<n; i++){
//     for (int j = 0; j < n; j ++){
//         cout << ch << " ";
//         ch ++;
//     }
//     cout  << endl;
    
//         }
    
//3. third pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// for (int i = 0; i< n ; i++){
//     char ch = 'A';
//     for (int j = 0; j< i+1; j++){
//         char new_ch = ch + i;
//         cout << new_ch<< " ";
             

//     }
//     cout<< endl;
// }
    

//4. fourth pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// for (int i = 0; i< n ; i++){
//     int num = 1;
//     for (int j = 0; j< i+1; j++){
//         cout << num<< " ";
//         num++;
             

//     }
//     cout<< endl;
// }



//5. fifth pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// for (int i = 0; i<n; i++){
//     for (int j = i+1 ; j>0; j--){

//         cout << j << " ";
//     }
//     cout<< endl;
// }
    


//6. sixth pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// char ch = 'A';
// for (int i = 0; i < n; i ++){
//     for (int j = 0; j < i+1 ; j++){
//         cout << ch << " ";
//         ch++;
//     }
//     cout << endl;
// }



//7. seventh pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// for (int i = 0 ; i < n; i++){
//     //spaces
//     for (int j = 0; j < i; j ++){
//         cout << " ";
//     }
//     //nums
//     for (int k= 0; k < n-i; k++){
//         cout << (i+1);

//     }
//     cout << endl;
// } 

//8. eighth pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// int num = 1;
//     for (int i = 0 ; i < n ; i++){
//         //spaces
//         for (int j = 1; j< n - i; j++){
//             cout << " ";
//         }
//         for (int j = 0; j< i+1; j++ ){
//             cout << num + j;
//         }
//         for (int j= i; j>0; j--){
            
//             cout << j;
//         }
//         cout <<endl;
//     }
    

//9. ninth pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// int num = 1;
// for( int i = 0; i<n ; i++){
//     for (int j = i+1; j>0; j-- ){
//     cout << j;
//     }
//     for (int j = (2*(n-i) - 2);j>0; j--){
//         cout << " ";
//     }
//     for (int j = 1; j<i+2; j++ ){
//     cout << j;
//     }
//     cout << endl;
// }
// for( int i = 0; i<n ; i++){
//     for (int j = n-i; j>0; j-- ){
//     cout << j;
//     }
//     for (int j = (2*i);j>0; j--){
//         cout << " ";
//     }
//     for (int j = 1; j<n-i+1; j++ ){
//     cout << j;
//     }
//     cout << endl;
// }


//10. tenth pattern
// int n;
// cout << "Enter a number: ";
// cin >> n;
// for (int i= 0; i< n; i++){
//     for (int j = n-i-1; j> 0; j--){
//         cout << " ";
//     }
//     for (int j = i - 1; j<i; j++){
//         cout << "*";
//     }
//     if (i > 0){
//         for (int j = 1; j<2*i; j++){
//             cout << " ";
//         }
//         cout << "*";
//     }

//     cout <<endl;
// }
// for (int i= 0; i< n-1; i++){
//     for (int j = 0; j < i+1; j++){
//         cout<< " ";
//     }
//     cout << "*";
//     if (i< (n-2)){
//         for (int j =2*(n-i)-5; j>0; j-- ){
//             cout << " ";
//         }
//         cout << "*";
//     }
//     cout <<endl;
// }





















    return 0;
}
    
    




