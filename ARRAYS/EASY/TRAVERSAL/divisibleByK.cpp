#include<iostream>
#include<vector>

using namespace std;



// Given an array of integers arr of size n and an integer K, find the sum of all elements in the array that are divisible by K.


// 1 ≤ n ≤ 10⁵
// 1 ≤ K ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [2, 4, 5, 6, 10], K = 2

// Output: 22

// Elements divisible by 2 are 2, 4, 6, 10.
// Sum = 22.

class Solution{
    public:
    int divisibleByK(vector<int> arr, int k){
        int total=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]%k==0){
                total=total+arr[i];
            }
        }
        return total;
    }
};

int main(){
    vector<int> arr= {2, 4, 5, 6, 10};
    int k=2;
    cout<< Solution().divisibleByK(arr,k);
    return 0;
}