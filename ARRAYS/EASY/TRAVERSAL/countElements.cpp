#include<iostream>
#include<vector>

using namespace std;

// Given an array of integers arr of size n and an integer X, count how many elements in the array are strictly greater than X.
// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i], X ≤ 10⁹

// Input: arr = [3, 7, 1, 9, 4], X = 4
// Output: 2


class Solution{
    public:
    int countElement(vector<int> arr, int k){
        int cnt=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>k){
                cnt++;
            }
        }

        return cnt;
    }
};

int main(){
    vector<int> arr= {3, 7, 8, 9, 4};
    int k=4;
    cout<< Solution().countElement(arr,k);
    return 0;

}