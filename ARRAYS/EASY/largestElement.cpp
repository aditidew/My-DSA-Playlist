#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


using namespace std;


// Given an array of integers arr of size n, find and return the largest (maximum) element present in the array.
// Example 
//   Input:arr = [2, 5, 1, 3, 0]
//   Output:5
//   Explanation: The largest element in the array is 5.


class Largest{
    public:
     int findLargestElement(vector<int> &nums){
        int largest= INT_MIN;
        for(int i=0; i< nums.size(); i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        return largest;
     }
};

int main(){
    vector<int> nums= {2,5,1,3,0};
    cout<<Largest().findLargestElement(nums);

    return 0;
}