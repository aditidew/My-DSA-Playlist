#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

// Given an array of integers arr of size n, find and return the second largest distinct element in the array.

// If the second largest element does not exist, return -1.
// The largest and second largest must be different
// Duplicate values do not count as second largest

// Example 1
// Input: arr = [12, 35, 1, 35, 34, 8]
// Output: 34

class SecondLargest{
    public:
     int findSecondLargest(vector<int> &nums){
        int largest= INT_MIN;
        int slargest= INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]> largest){
                slargest=largest;
                largest= nums[i];
            }

            else if(nums[i]<largest && nums[i]>slargest){
                slargest= nums[i];
            }
            
        }
        if(slargest== INT_MIN) return -1;
        else slargest;
     }

};

int main(){
    vector<int> nums= {35, 35, 35, 35, 35, 35};
    cout<< SecondLargest().findSecondLargest(nums);

    return 0;
}