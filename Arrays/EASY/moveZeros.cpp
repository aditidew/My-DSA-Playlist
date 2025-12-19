#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Given an array of integers arr of size n, move all 0s in the array to the end, while maintaining the relative order of the non-zero elements.

// The operation should be done in-place (without using extra space for another array).
// The order of non-zero elements must remain the same
// Only the position of zeros changes
// Zeros are shifted to the end of the array
// Input: arr = [0, 1, 0, 3, 12]   {1,0,0,3,12}
// Output: [1, 3, 12, 0, 0]


class Zeros{
 public:
 vector<int> moveZerosToEnd(vector<int> nums){
    int i=0;
   

    for(int j=0; j<nums.size(); j++){
        if(nums[j]!=0){
            swap(nums[i], nums[j]);
            i++;
            
        }
    }
    return nums;
 }
};

int main(){
    vector<int> nums={0, 1, 0, 3, 12};
    vector<int> arr = Zeros().moveZerosToEnd(nums) ;

    for(int i=0; i<arr.size();i++){
        cout<< arr[i] << " ";
    }

    return 0;
}