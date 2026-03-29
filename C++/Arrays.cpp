#include<iostream>
using namespace std;
// int main (){
//     // //1. WAP to display lowest and highest value of an array
//     //  int size;
//     //  cout << "How many do u have? : ";
//     //  cin >> size;
//     //  int smallest = INT_MAX;
//     //  int largest = INT_MIN;
//     //  int val[size];
//     //  for (int i = 0; i<size; i++){
//     //     cout << "Enter the value "<< (i+1) << ": ";
//     //     cin >> val[i];

//     //  }
//     //  for (int i = 0; i<size; i++){
//     //     if (val[i] < smallest){
//     //         smallest = val[i];
          
//     //     }if (val[i]>largest){
//     //         largest = val[i];
//     //     }

  
//     //  }
//     //  cout<< endl;
//     //  cout << "smallest value among the values entered: " << smallest << endl;
//     //  cout << "largest value among the values entered: " << largest << endl;

    
//     //Pass by reference 
//     // in arrays when we change inputs of an array, they are done using referencing; i.e. not by creating new variable like in pass by value
//     // of function

// //     void update(int arr[], int size) {
// //     for (int i = 0; i < size; i++) {
// //         arr[i] += 5;
// //     }
// // }

// // int main() {
// //     int arr[3] = {1, 2, 3};
// //     update(arr, 3);

// //     // Output: 6 7 8
// //     for (int i = 0; i < 3; i++) {
// //         cout << arr[i] << " ";
// //     }
// // }

// //here output changes; becoz new array was not  created

// int main (){
// int size;
// cout << "Hey! Enter the Size of your array: ";
// cin >> size;
// int arr[size];
// bool notfound = true ;
// int target = 1;
// for (int i = 0; i< size; i++){
//     cout << "Enter " << (i+1) <<" value of the array: ";
//     cin >> arr[i];
// };
// // 1.linear search;
// int search;
// cout << "WellDone! Which number you wanna search for now: ";
// cin >> search;
// for (int i = 0; i< size; i++){
//     if(arr[i] == search){
//         notfound = false;
//         target += i;
//         break;
//     }
    
// }
// if (notfound){
//     cout << "Sorry :( no such target found\n";
// }else{
//     cout << "Success! Your target is struck at "<<target<<" position\n";
// }


//     return 0;
// }

// void making_array(int arr[], int arr_size){
//     for (int i = 0; i<arr_size; i++){
//         cout << "Enter "<< (i+1)<< " value: ";
//         cin >> arr[i];
//     };
// };

// int sum_product (){
//     int sum = 0;
//     int product = 1;
//     cout << "Enter size pf array: ";
//     int size;
//     cin >> size;
//     int arr [size];
//     making_array (arr,size);
//     for (int i = 0; i < size; i++){
//         sum += arr[i];
//         product *= arr [i];
//     }
//     cout << sum << endl;
//     cout << product << endl;
    

// }

int main (){
    printf("Hello World\n");
    return 0;
}