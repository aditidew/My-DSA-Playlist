#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;

// Given an array of integers arr of size n, find the element that occurs the maximum number of times in the array.

// If multiple elements have the same maximum frequency, return any one of them.

// 1 ≤ n ≤ 10⁴
// -10⁹ ≤ arr[i] ≤ 10⁹

// [1, 3, 2, 1, 4, 1] ->> 1

class Solution{
    public:
    int occursMax(vector<int> &arr){
     unordered_map<int,int> mp;
     for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
     }
     int maxVal= INT_MIN;
     int element;
     for(auto x:mp){
        if(x.second>maxVal) {
        maxVal= x.second;
        element= x.first;
        }

        

     }
     return element;
     
    } 
    
};

int main(){
    vector<int> arr= {6,3,3,3,4,1};
    cout<<Solution().occursMax(arr);
    return 0;
}