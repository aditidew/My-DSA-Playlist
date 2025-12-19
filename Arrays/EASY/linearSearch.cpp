#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Given an array of integers arr of size n and a value x, determine whether x is present in the array.
// If the element is found, return its index (0-based).
// If the element is not found, return -1.
// Example 
// Input: arr = [5, 3, 7, 1, 9] x = 7
// Output: 2


class Linear{
    public:
     int linearSearch(vector<int> &nums, int x){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]== x) return i;
        }

        return -1;

     }

};

int main(){
    vector<int> nums= {5, 3, 7, 1, 9};
    int x=8;
    cout<<Linear().linearSearch(nums,x);

    return 0;
}