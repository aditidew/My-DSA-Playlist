#include<iostream>
#include<vector>

using namespace std;

// Given an array arr of size n, find an index i such that the sum of elements to the left of index i is equal to the sum of elements to the right of index i.
// Return the index if it exists, otherwise return -1.

// 1 ≤ n ≤ 10⁴ (brute force allowed)
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [1, 3, 5, 2, 2]

// Output: 2

// Explanation:
// Left sum = 1 + 3 = 4
// Right sum = 2 + 2 = 4

class Solution{
    public:
    int leftRightSum(vector<int> &arr){
        int i= arr.size()/2;
        int sum1=0;
        int sum2=0;

        for(int x=0; x<i; x++){
            sum1=sum1+arr[x];

        }
        for(int x=arr.size()-1; x>i; x--){
            sum2=sum2+arr[x];

        }
        if(sum1==sum2) return i;
        
        return -1;
    }
};
int main(){
    vector<int> arr={1, 3, 5, 2, 2};
    cout<< Solution().leftRightSum(arr);

    return 0;
}
