#include<bits/stdc++.h>
using namespace std;

// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
// This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true


class Search{
    public:
    bool binarySearch(vector<vector<int>> &matrix, int target){
        if(matrix.empty() || matrix[0].empty()) return false;

        int n= matrix.size();
        int m= matrix[0].size();

        int row=0;
        int col=m-1;

        while(row<n && col<m ){
           if(target== matrix[row][col]) return true;
           else if(target > matrix[row][col]) row++;
           else col--;
        }
        return false;

    }
};

int main(){
    vector<vector<int>> matrix= {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    cout<< Search().binarySearch(matrix,8);

    return 0;
}