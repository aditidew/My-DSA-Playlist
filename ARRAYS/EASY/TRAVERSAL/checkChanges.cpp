#include<iostream>
#include<vector>
using namespace std;

// Given an array of integers arr of size n, count the number of times the value of the current element is different from the previous element, i.e., the number of indices i such that:

// arr[i]!=arr[i−1]

// for all valid i where 1 ≤ i < n.
// Input: arr = [1, 1, 2, 2, 2, 3, 1]
// Output: 3

class Solution{
    public:
    int valueChanges(vector<int> &arr){
        int val=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] != arr[i-1])
            val++;


        }
        return val;
    }
};

int main(){
  vector<int> arr=  {1, 1, 2, 2, 2, 3, 1};
  cout<<Solution().valueChanges(arr);

  return 0;
}