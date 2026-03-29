#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "Enter size of your array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i< size ; i++){
        cout << "Enter " << (i+1) <<" value of your array: ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    // binary search

    int st = 0;
    int end = size - 1;
    

    while (st <= end){
        int mid = st - (st - end)/ 2;
        if (arr[mid]> target){
            end = mid - 1;
        }
        else if(arr[mid]< target){
            st = mid + 1;
        }
        else{
            cout << mid << endl;
            break;
        }
    }











    return 0; 
}






