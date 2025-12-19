#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Given an array arr[] of n integers and a target value, check if there exists a pair whose sum equals the target. 
// Constraints:
  // You may assume that each input has exactly one solution.
  // You may not use the same element twice.
  // You can return the answer in any order
// Examples: 
  // Input: arr[] = [0, -1, 2, -3, 1], target = -2
  // Output: true
  // Explanation: There is a pair (1, -3) with the sum equal to given target, 1 + (-3) = -2.


  class TwoSum{
    
    public:
      void findTwoSum(vector<int> &nums, int target){
        sort(nums.begin(), nums.end());
        int left=0;
        int right= nums.size() -1;
        

        while(left<right){
            int sum= nums[left] + nums[right];
            if(sum==target) {
                cout<< "The sum is found at indices: " << left << " & " << right;
                return;
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }

        cout<< "No solution";
        return;
      }

  };


  int main(){
    vector<int> nums= { 0,-1,2,-3,1};
    int target= -2;

    TwoSum().findTwoSum(nums, target);
  }