#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Given an array of integers arr of size n, find the difference between the maximum and minimum elements in the array.

// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [4, 2, 9, 1, 6]

// Output: 8

// Maximum = 9, Minimum = 1
// Difference = 9 - 1 = 8 ans

class Solution{
    public:
     int difference(vector<int> &arr){
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0; i< arr.size(); i++){
            if(arr[i] > max){
                max= arr[i];
            }
            if(arr[i] < min){
                min= arr[i];
            }
        }

        return max-min;
     }
};

int main(){
    vector<int> arr= {4, 2, 9, 1, 6};
    cout<< Solution().difference(arr);

    return 0;
}
