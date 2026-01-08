#include<iostream>
#include<vector>
using namespace std;

// Given an array of integers arr of size n, count the number of: positive numbers, negative numbers, zeroes

// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input:arr = [-1, 0, 5, -3, 0, 2]
// Output: positive = 2, negative = 2, zero = 2

class Solution{
    public:
    void countAll(vector<int> &arr){
        int pos=0;
        int neg=0;
        int zero=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]> 0){
                pos++;

            }
            else if(arr[i]<0){
                neg++;
            }
            else zero++;
        }
       cout<< "Positive :" <<pos <<endl;
       cout<< "Negative :" <<neg <<endl;
       cout<< "Zeros :" << zero <<endl;

    
    }
};

int main(){
    vector<int> arr= {-1, 0, 5, -3, 0, 2};
    Solution().countAll(arr);

    return 0;
}