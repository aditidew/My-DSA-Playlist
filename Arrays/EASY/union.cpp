#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;




// Given two arrays arr1 and arr2 of sizes n and m respectively, find the union of the two arrays.
// The union of two arrays contains all distinct elements that appear in either of the arrays.
// The order of elements in the result can be:
// Sorted order (commonly required), or
// Any order (if not specified)

// No duplicate elements should appear in the union
// Each element must appear only once
// Union size can be ≤ n + m


// Input:
// arr1 = [1, 2, 3, 4]
// arr2 = [3, 4, 5, 6]


// Output:
// [1, 2, 3, 4, 5, 6]


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class UnionArray {
public:
    vector<int> findUnion(vector<int> num1, vector<int> num2) {
        vector<int> arr;
        int i = 0, j = 0;

        while (i < num1.size() && j < num2.size()) {
            if (num1[i] < num2[j]) {
                if (arr.empty() || arr.back() != num1[i])
                    arr.push_back(num1[i]);
                i++;
            }
            else if (num1[i] > num2[j]) {
                if (arr.empty() || arr.back() != num2[j])
                    arr.push_back(num2[j]);
                j++;
            }
            else {
                if (arr.empty() || arr.back() != num1[i])
                    arr.push_back(num1[i]);
                i++;
                j++;
            }
        }

        while (i < num1.size()) {
            if (arr.empty() || arr.back() != num1[i])
                arr.push_back(num1[i]);
            i++;
        }

        while (j < num2.size()) {
            if (arr.empty() || arr.back() != num2[j])
                arr.push_back(num2[j]);
            j++;
        }

        return arr;
    }
};

int main() {
    vector<int> num1 = {1, 2, 3, 4};
    vector<int> num2 = {3, 4, 5, 6};

    vector<int> result = UnionArray().findUnion(num1, num2);

    for (int x : result)
        cout << x << " ";

    return 0;
}
