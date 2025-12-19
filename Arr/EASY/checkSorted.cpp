#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// Given an array of integers arr of size n, determine whether the array is sorted in non-decreasing (ascending) order.
// Return true if the array is sorted, otherwise return false.
// Example 1
//   Input: arr = [1, 2, 3, 4, 5]
//   Output: true


class Sorted{

    public:
      bool checkIfSorted(vector<int> nums){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
      }
};

int main(){
    vector<int> nums={1,2,7,4,5};
    cout<<Sorted().checkIfSorted(nums);

    return 0;
}