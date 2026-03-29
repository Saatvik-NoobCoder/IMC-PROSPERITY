#include <iostream>
#include <vector>
using namespace std;

    vector <int> pairSum (vector<int>nums , int target){
        //brute force
        // vector <int> ans;
        // int n = nums.size();
        // for (int i = 0; i< n; i++){
        //     for (int j = i+1; j<n; j++){
        //         if (nums[i] + nums[j] == target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // } return ans;

        //optimal
        vector <int> ans;
        int n = nums.size();
        int i = 0;
        int j = n-1;
        while (i< j){
            if (nums[i]+nums[j] > target){
                j--;
            }else if(nums[i]+nums[j] < target){
                i++;
            }else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            
        }
        return ans;


    }

int main(){
    int size;
    cout << "Enter Size of your vector: ";
    cin >> size;
    vector <int> vec;
    for (int i = 0; i< size; i++){
        int n;
        cout << "Enter " << (i+1) << " value of vector: ";
        cin >> n;
        vec.push_back(n);
    }
    int t;
    cout << "Enter the target: ";
    cin >> t;

    vector<int>ans = pairSum(vec,t);
    cout << ans[0] << ","<< ans[1] << endl;


    return 0;
}