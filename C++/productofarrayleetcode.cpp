#include <iostream>
#include <vector>
using namespace std;

vector <int> ProductArray (vector<int>nums){
    vector <int> ans;

    for (int i = 1; i< nums.size(); i++){
        ans[0]=1;
        ans[i] = ans[i-1]*nums[i-1];
    }
    int suffix  = 1;
    for (int i = nums.size()-2; i>=0; i--){
        suffix *= nums[i];
        ans[i] *= suffix;

    }
    
                
    return ans;
}