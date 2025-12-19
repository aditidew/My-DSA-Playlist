#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Given an array of integers arr of size n, rotate the array by one place to the left.
// After rotation, the first element moves to the end of the array, and all other elements shift one position to the left.
// Example S
// Input: arr = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]


class Rotate{
  public:
   vector<int> leftRotateByOne(vector<int> nums){
    int temp = nums[0];
    for(int i=1; i<nums.size(); i++){
        nums[i-1]= nums[i];
    }

    nums[nums.size()-1]= temp;

    return nums;
   }
};

int main(){

    vector<int> nums= {1, 2, 3, 4, 5};
    vector<int> arr= Rotate().leftRotateByOne(nums);

    for(int i=0; i<nums.size(); i++){
        cout<< arr[i] << " " ;
    }
    return 0;
}
