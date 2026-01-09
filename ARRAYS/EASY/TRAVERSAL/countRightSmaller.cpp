#include<iostream>
#include<vector>

using namespace std;


// Given an array arr of size n, count the number of elements such that each element is strictly smaller than all elements to its right.
// The last element is always counted.

// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [4, 3, 2, 5, 8]

// Output: 3

// Elements satisfying condition: 2, 5, 8


class Solution{
    public:
    int countRightSmaller(vector<int> &arr){
        int cnt=1;
        int min=arr[arr.size()-1];
        for(int i=arr.size() -2; i>=0; i--){
            if(arr[i]<min){
                cnt++;
                min= arr[i];
            }

        }
        return cnt;
    }
};

int main(){
    vector<int> arr={4, 3, 2, 5, 8};
    cout<< Solution(). countRightSmaller(arr);
}