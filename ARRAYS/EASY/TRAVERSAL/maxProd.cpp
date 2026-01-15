#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Given an array of integers arr of size n, find the maximum product of two adjacent elements in the array.



// 2 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹ 

class Solution{
    public:
    int maxProd(vector<int> &arr){
        int prod= arr[0];
        int maxProduct = INT_MIN;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]*arr[i-1]> maxProduct)
            maxProduct=  arr[i]*arr[i-1];
        }

        return maxProduct;
    }
};

int main(){
    vector<int> arr= {2,4,6,1,3};
    cout<<Solution().maxProd(arr);
}