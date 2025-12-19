#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// Given a sorted array of integers arr of size n, remove the duplicate elements such that each element appears only once.
// The relative order of the elements should remain the same.
// After removing duplicates, return the number of unique elements, and modify the array in-place so that the first part of the array contains the unique elements.
// You must not use extra space for another array
// Only the first k elements (unique elements) matter
// Values beyond the first k elements can be ignored


// Input: arr = [1, 1, 2,2,3]
// Output:
// k = 3
// arr = [1, 2, 3, _]
// Explanation:
// There are 2 unique elements: 1 and 2.


class Removes {
public:
    int removesDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int i = 0;  // index of last unique element

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];  // move unique element forward
            }
        }

        return i + 1;  // number of unique elements
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3};

    int k = Removes().removesDuplicates(nums);
    cout << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
