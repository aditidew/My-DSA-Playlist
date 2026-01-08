#include<iostream>
#include<vector>

using namespace std;

// Given an array arr of size n, count the number of elements such that each element is strictly greater than all elements to its left.
// The first element is always counted, since there are no elements to its left.
// s

// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [5, 3, 20, 25, 30]
// Output: 3
// Explanation: Elements satisfying condition: 5, 20, 30

class Solution{
    public:
    int countLeftgreater(vector<int> &arr){
        int cnt=1;
        int maxSoFar= arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]> maxSoFar) cnt++;
            maxSoFar= arr[i];

            

        }

        return cnt;

    }
};

int main(){
    vector<int> arr={5, 3, 20, 25, 30};
    cout<< Solution(). countLeftgreater(arr);
    return 0;
}