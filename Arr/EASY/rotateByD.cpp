#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Given an array of integers arr of size n and an integer d, rotate the array to the left by d positions.
// In a left rotation, elements shifted out from the beginning of the array reappear at the end, and the order of the remaining elements stays the same.

// Rotation should be done in-place
// If d > n, rotate by d % n
// Left rotation means shifting elements towards the left.

// Input: arr = [1, 2, 3, 4, 5] d = 2
// Output: [3, 4, 5, 1, 2]


class Rotate{
    public:

    void swapfn(vector<int> &nums, int left, int right){
        while(left<right){
            swap(nums[left], nums[right] );
            left++;
            right--;
        }
    }

    vector<int> rotatebyD(vector<int> &nums, int d){
        int n=nums.size();

        if(d > nums.size()){
            d = d % n;
        }

        

        swapfn(nums, 0, d-1);
        swapfn(nums, d, n-1);
        swapfn(nums, 0, n-1);

      return nums;

    }
};

int main(){
    vector<int> nums={1, 2, 3, 4, 5};
    int d=2;
    vector<int> arr= Rotate().rotatebyD(nums,d);
    
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }

    return 0;
}