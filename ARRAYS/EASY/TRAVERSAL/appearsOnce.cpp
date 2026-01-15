#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Given an array of integers arr of size n, find all elements that occur exactly once in the array.

// Return the elements in any order.
// If no such element exists, return an empty list.

// 1 ≤ n ≤ 10⁴
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [1, 2, 2, 3, 4, 4]
// Output: [1, 3]

class Solution{
    public:
    vector<int> appearsOnce(vector<int> &arr){
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }

        for(auto it: mp){
            if(it.second==1) result.push_back(it.first);
        }

       return result;
    }
};

int main(){
    vector<int> arr=  {1, 2, 2, 3, 4, 4};
    vector<int> ans = Solution().appearsOnce(arr);
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i] << " ";
    }
    return 0;
}