#include<iostream>
#include<vector>

using namespace std;

// Given an array of integers arr of size n, find the index of the first element that repeats in the array.

// An element is considered repeating if it appears more than once in the array.
// The first repeating element is the one whose first occurrence has the smallest index.

// If no element repeats, return -1.

// Input: arr = [10, 5, 3, 4, 3, 5, 6]


// Output: 1

class Solution{
    public:
    int firstRepeating(vector<int> &arr){
        
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]== arr[j]) 
                return i;
            }
        }

        return -1;

    }
};

int main(){
    vector<int> arr ={10, 5, 11, 4, 3, 4, 6};
    cout<<Solution().firstRepeating(arr);

    return 0;
}