#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


// Given an array of integers arr of size n, check whether all elements in the array are unique.
// Return true if all elements are distinct, otherwise return false.

// 1 ≤ n ≤ 10⁵
// -10⁹ ≤ arr[i] ≤ 10⁹

// Input: arr = [1, 2, 3, 4]

// Output: true


class Solution{
   public:
   bool checkUnique(vector<int> &arr){
    unordered_set<int> s;
    for(auto x: arr){
        if(s.find(x) != s.end()) return false;
        s.insert(x);
    }
    return true;
   }

};

int main(){
    vector<int> arr= {1,2,3,4};
    if(Solution().checkUnique(arr)) cout<< "True";
    else cout<< "False";

    return 0;
}


