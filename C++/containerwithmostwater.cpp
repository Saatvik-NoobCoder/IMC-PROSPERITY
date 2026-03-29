#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxArea(vector<int>& height) {
    int lp = 0;
    int rp = height.size()-1;
    int ans = 0;
    while (rp>lp){
        int w = rp-lp;
        int h = min(height[rp],height[lp]);
        ans = max(ans,w*h);
        if(height[rp]>height[lp]){
            lp++;
        }else{
            rp--;
        }

    }
    return ans;
                                                             
}


    // int largest = INT_MIN;
    // for(int i = 0; i< height.size(); i++){
    //     for(int j = i+1;j < height.size();j++){
    //         int h  = min(height[i], height[j]);
    //         int w = j - i;
    //         int area = h*w;
    //         if (area>largest){
    //             largest = area;
    //         }
    //     }
    // }