#include <iostream>
#include <vector>
using namespace std;

//Majority Element
int MajorityElement (vector <int> nums){
    
    
    //brute force O(n2)
    // for (int i = 0; i< nums.size(); i++){
    //     int e = 0;
    //     for (int j = 0; j< nums.size(); j++){
    //         if (nums[i] == nums[j]){
    //             e++;
    
    //             if (e> nums.size()/2){
    //                 return nums [i];
    //             }
            
    //         }
    //     }
    // }return -1;


    //Moore's Algorithm...
    int freq = 0, ans = 0;
    for (int i = 0; i< nums.size(); i++){
        if (freq == 0){
            ans = nums [i];
        }
        if (ans == nums[i]){
            freq ++;
        }else{
            freq--;
        }
    
    }
    return ans;

}

 