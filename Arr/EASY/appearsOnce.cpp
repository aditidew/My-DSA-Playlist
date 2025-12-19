#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// You are given an array arr of size n where every element appears exactly twice except for one element, which appears only once.

// Your task is to find and return the element that appears only once.


// The array may be unsorted
// There is always exactly one answer
// Aim for an efficient solution


// Input: arr = [4, 1, 2, 1, 2]
// Output: 4



class Appears{
    public:
     int appearsOnce(vector<int> &nums){
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            if(it.second==1) return it.first;
        }
        return 0;
     }
};

int main(){
    vector<int> nums= {4, 1, 2, 1, 2};
    cout<<Appears().appearsOnce(nums);

    return 0;
}