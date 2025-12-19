#include<bits/stdc++.h>
using namespace std;

// Problem Statement: You have been given a 2-D array 'mat' of size 'N x M' where 'N' and 'M' denote the number of rows and columns, respectively. 
// The elements of each row are sorted in non-decreasing order. Moreover, the first element of a row is greater than the last element of the previous row (if it exists). 
// You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.

// Examples
// Input :mat = [ [1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12] ], target = 8
// Output :True.
// Explanation :The target = 8 exists in the 'mat' at index (1, 3).

// Constraints
// 1 ≤ n, m ≤ 1000
// -10^9 ≤ matrix[i][j], target ≤ 10^9


class Search{
    public:
    
         bool searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;

        int n = matrix.size();       // rows
        int m = matrix[0].size();    // columns

        int low = 0;
        int high = n * m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int row = mid / m;
            int col = mid % m;

            int value = matrix[row][col];  // ✅ FIXED

            if (value == target)
                return true;
            else if (value < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << Search().searchMatrix(matrix, 9);
}