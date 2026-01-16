#include<iostream>
#include<vector>
 
using namespace std;

// Given an array of integers arr of size n, your task is to find the length of the longest contiguous subsequence consisting of the same element.

// A consecutive (or contiguous) sequence means the elements appear next to each other in the array.

// Input: arr = [1, 1, 2, 2, 2, 3, 3, 1]


// Output: 3

class Solution{
    public:
    int longestSequence(vector<int> &arr){
        int curr = 1;
        int maxi=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==arr[i-1]){
                curr++;
                
            }
            else {
                curr=1;
            }
            maxi= max(curr, maxi);
        }

        return maxi;
    }
};

int main(){
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3, 1};
    cout<<Solution().longestSequence(arr);

    return 0;
}
