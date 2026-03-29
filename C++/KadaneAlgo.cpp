#include <iostream>
using namespace std;
int main (){


    //Subarrays
    // let a array has 1,2,3,4,5
    // continuous data like 1,2 ; 2,3; 3,4; 1,2,3; 1,2,3,4 ; 3,4,5; ...are all sub arrays!!!

    int size;
    cout << "Enter size of your array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i< size ; i++){
        cout << "Enter " << (i+1) <<" value of your array: ";
        cin >> arr[i];
    }
    //to print all sub arrays of entered array
    cout << "All subarrays are as follows: "<< endl;
    for (int st = 0; st<size; st++){
        for (int end= st; end<size;end++){
            for (int j = st; j<=end; j++){
                cout << arr[j];
            }cout << " ";
        }cout << endl;
    }

    //to find max sum array using brute force
    cout << "Do you want to find out max sum array?:   (Y/N)";
    char ch;
    cin>>ch;
    if(ch == 'Y'){
        int max = INT_MIN;
        for (int st = 0; st<size; st++){
            for (int end= st; end<size;end++){
                int sum = 0;
                for (int j = st; j<=end; j++){
                    sum += arr[j];
                    if(sum>max){
                        max = sum;
                    }
                }
            }
        }
        cout << max << endl;
    }

    //Kadane's Algorithm!!! 
    int currSum = 0;
    int maxSum = INT_MIN;
        for (int i = 0; i<size; i++){
            currSum+= arr[i];
            maxSum = max(currSum,maxSum);
            if (currSum< 0){
                currSum = 0;
            }
        }
    cout<<maxSum<<endl;







    return 0;
}