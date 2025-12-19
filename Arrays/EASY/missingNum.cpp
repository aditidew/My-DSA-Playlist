#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// You are given an array arr of size n containing distinct integers from the range 0 to n (inclusive).
// Exactly one number is missing from this range.

// Your task is to find and return the missing number.


// All numbers are distinct
// The array may be unsorted
// You must find the missing number efficiently
// Only one number is missing

// Input: arr = [3, 0, 1]
// Output: 2


class Missing{
    public:
    int findMissingNum(vector<int> &nums){
        int n=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != n) return n;
            else{
                n++;
            }
        }

        return 0;
    }
};

int main(){
    vector<int> nums= {3, 0, 1};
    cout<< Missing().findMissingNum(nums);

    return 0;
}