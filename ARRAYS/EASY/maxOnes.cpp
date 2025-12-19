#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// Given a binary array arr consisting only of 0s and 1s, find the maximum number of consecutive 1s present in the array.

// Example 
// Input: arr = [1, 1, 0, 1, 1, 1]
// Output: 3

class Ones{

    public:
    int countOnes(vector<int> &nums){
        int count=0;
        int maxcount=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            
            maxcount=max(maxcount, count);
            }
            else{
                count=0;
            }
        }

        return maxcount;
    }
};

int main(){
    vector<int> nums= {1, 1, 0, 1, 1, 1};
    cout<< Ones().countOnes(nums);

    return 0;
}