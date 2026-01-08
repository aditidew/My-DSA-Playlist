#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Given an array of integers arr of size n and an integer X, find the index of the first occurrence of X in the array.
// Return -1 if X is not present.

// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i], X ≤ 10⁹

// Input: arr = [5, 3, 7, 3, 9], X = 3

// Output: 1

// Explanation:
// First occurrence of 3 is at index 1

class Solution{
    public:
    int firstOccurence(vector<int> &arr, int x){
        for(int i=0; i<arr.size(); i++){
            if(arr[i]== x) return i;
        }
        return -1;
    }

    int lastOccurence(vector<int> &arr, int x){
        reverse(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]== x) return arr.size()-1-i;
        }
        return -1;
    }

};

int main(){
    vector<int> arr= {3, 6, 5, 3, 9};
    int x= 3;
    cout<<Solution().firstOccurence(arr, x)<< endl;
    cout<<Solution().lastOccurence(arr, x);
    return 0;
}